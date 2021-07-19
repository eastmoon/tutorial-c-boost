if [ -d ${1} ]; then
    [ ! -d ./build/${1} ] && mkdir -p ./build/${1}
    cmake -S ./${1} -B ./build/${1}
    make -C ./build/${1}
    echo ">> Execute example"
    echo ""
    ./build/${1}/example
    echo ""
fi
