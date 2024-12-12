cmake_minimum_required(VERSION 3.16)

project(CampusConnect VERSION 0.1 LANGUAGES CXX)

# Enable automatic MOC, UIC, and RCC
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find necessary Qt modules
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools Sql)

# Translation files
set(TS_FILES CampusConnect_en_US.ts)

# Source files
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    signup.h signup.cpp signup.ui
    feed.h feed.cpp feed.ui
    resources.qrc
    map.h map.cpp map.ui
    events.h events.cpp events.ui
    chatdialog.h chatdialog.cpp chatdialog.ui

    ${TS_FILES}
)

# Set the application icon for macOS
set(MACOSX_BUNDLE_ICON_FILE photosurface.icns)
set(app_icon_macos "${CMAKE_CURRENT_SOURCE_DIR}/image/p.icns")
set_source_files_properties(${app_icon_macos} PROPERTIES
       MACOSX_PACKAGE_LOCATION "Resources")


# Qt 6-specific setup
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(CampusConnect
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        request.h request.cpp request.ui
        event.h event.cpp event.ui
    )
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

else() # Qt 5-specific setup
    if(ANDROID)
        add_library(CampusConnect SHARED ${PROJECT_SOURCES})
        # Android-specific settings
        set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(CampusConnect ${PROJECT_SOURCES})
    endif()
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

# Link libraries
target_link_libraries(CampusConnect PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
)

# Bundle settings for macOS/iOS
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.CampusConnect)
endif()

set_target_properties(CampusConnect PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install target
include(GNUInstallDirs)
install(TARGETS CampusConnect
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize for Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(CampusConnect)
endif()
