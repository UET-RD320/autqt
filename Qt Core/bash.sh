#!/bin/bash

# Đường dẫn đến thư mục chứa các file header của Qt
QT_INCLUDE_DIR="/path/to/qt/include"
# Đường dẫn đến thư mục chứa các file header của Qt
QT_LIBRARY_DIR="/path/to/qt/lib"

g++ demo.cpp -o myapp -I"$QT_INCLUDE_DIR" -L"$QT_LIBRARY_DIR" -lQt5Core -lQt5Gui -lQt5Widgets -lQt5Network

if [ $? -eq 0 ]; then
    ./myapp
else
    echo "Compile error"
fi
