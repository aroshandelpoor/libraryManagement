cmake_minimum_required(VERSION 3.5)

project(bookyad VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Sql)



set(PROJECT_SOURCES

        main.cpp
        mainform.cpp
        loginwindow.cpp
        bookform.cpp
        dialoginsertbook.cpp
        borrowerform.cpp
        memberform.cpp

        mainform.h
        loginwindow.h
        bookform.h
        dialoginsertbook.h
        borrowerform.h
        memberform.h

        mainform.ui
        loginwindow.ui
        bookform.ui
        dialoginsertbook.ui
        borrowerform.ui
        memberform.ui

        icons.qrc
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(bookyad
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        bookform.h bookform.cpp bookform.ui
        dialoginsertbook.h dialoginsertbook.cpp dialoginsertbook.ui
        borrowerform.h borrowerform.cpp borrowerform.ui
        memberform.h memberform.cpp memberform.ui
        dialogdeletebook.h dialogdeletebook.cpp dialogdeletebook.ui
        staffform.h staffform.cpp staffform.ui
        dialogbio.h dialogbio.cpp dialogbio.ui
        dialogeditbook.h dialogeditbook.cpp dialogeditbook.ui
        dialoginsertstaff.h dialoginsertstaff.cpp dialoginsertstaff.ui
        dialogdeletestaff.h dialogdeletestaff.cpp dialogdeletestaff.ui
        dialogeditstaff.h dialogeditstaff.cpp dialogeditstaff.ui
        dialoginsertmember.h dialoginsertmember.cpp dialoginsertmember.ui
        dialogdeletemember.h dialogdeletemember.cpp dialogdeletemember.ui
        dialogeditmember.h dialogeditmember.cpp dialogeditmember.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET bookyad APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(bookyad SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(bookyad
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(bookyad PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(bookyad PRIVATE Qt6::Sql)

set_target_properties(bookyad PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS bookyad
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(bookyad)
endif()
