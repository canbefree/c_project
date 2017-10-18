#/bin/bash
if [ -z $1 ];then
    echo "please input filename";
fi

if [ -d build ];then
    rm -rf build
fi

mkdir build

g++ -Iinclude $1 -o build/t.out

./build/t.out
