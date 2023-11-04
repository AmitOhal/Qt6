cmake_minimum_required(VERSION 3.14)

project(qtcb-L11_7_QTimer LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(qtcb-L11_7_QTimer
  main.cpp
  test.cpp
  test.h
)
target_link_libraries(qtcb-L11_7_QTimer Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS qtcb-L11_7_QTimer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
