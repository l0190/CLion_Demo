# 1,设置 CMake 最低版本号，我电脑装的是3.5
cmake_minimum_required( VERSION 3.5 )

# 2,设置工程名称，叫“Demo1”（在Linux下可以随便设置）
set(project_name "Demo1")
project( ${project_name} )

# 3,设定编译参数
set(CMAKE_BUILD_TYPE "Release")  # 调试使用Debug，可以查看中间变量；发布使用Release，运行速度快
set(CMAKE_C_COMPILER gcc)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 4，把当前文件夹下的源码列表（文件后缀匹配的那些文件）存到变量 SRCS 中
# 设置源文件
set(SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${project_name}.c)

# 5，把源码编译成一个可执行文件，文件名为test01（可以随便取名），会保存在当前目录下
add_executable( ${project_name} ${SOURCE_FILES} )
