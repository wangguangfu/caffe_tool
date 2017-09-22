cmake_minimum_required (VERSION 2.8)

project (pt_test)

add_executable(run protobuf_parser.cpp)

include_directories (/home/cv/DLhome/test/guangfu/my_tool/caffemodel_parser/include 
    /usr/local/include
    /usr/local/cuda/include
    /usr/include )

target_link_libraries(run
    /home/cv/DLhome/test/guangfu/my_tool/caffemodel_parser/build/lib/libcaffe.so 
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libboost_system.so
    )
