cmake_minimum_required(VERSION 3.5)

project(Playbook_Online VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        loginscreen_admin.cpp
        loginscreen_admin.h
        loginscreen_admin.ui
        loginscreen_user.cpp
        loginscreen_user.h
        loginscreen_user.ui
        linkedlist_user.cpp
        linkedlist_user.h
        linkedlist_user.ui
        linkedlist_admin.cpp
        linkedlist_admin.h
        linkedlist_admin.ui
        addbook_linkedlist_user.cpp
        addbook_linkedlist_user.h
        addbook_linkedlist_user.ui
        addbook_linkedlist_admin.cpp
        addbook_linkedlist_admin.h
        addbook_linkedlist_admin.ui
        deletebook_linkedlist.cpp
        deletebook_linkedlist.h
        deletebook_linkedlist.ui

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Playbook_Online
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        loginscreen_user.h loginscreen_user.cpp loginscreen_user.ui
        loginscreen_admin.h loginscreen_admin.cpp loginscreen_admin.ui
        Resource.qrc
        linkedlist_user.h linkedlist_user.cpp linkedlist_user.ui
        addbook_linkedlist_user.h addbook_linkedlist_user.cpp addbook_linkedlist_user.ui



        addbook_linkedlist_admin.h addbook_linkedlist_admin.cpp addbook_linkedlist_admin.ui
        deletebook_linkedlist.h deletebook_linkedlist.cpp deletebook_linkedlist.ui
        linkedlist_admin.h linkedlist_admin.cpp linkedlist_admin.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Playbook_Online APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Playbook_Online SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Playbook_Online
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Playbook_Online PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Playbook_Online)
endif()
set_target_properties(Playbook_Online PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Playbook_Online
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Playbook_Online)
endif()
