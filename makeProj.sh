#!/bin/ksh
projectName="TextHexExchange"
currentDir=`pwd`
compileParam="-spec macx-clang CONFIG+=x86_64 CONFIG+=qtquickcompile"
destFolder="build-Release";
if [ "$1" == "debug" ]; then
    destFolder="build-Debug"
    complieParam="-spec macx-clang CONFIG+=debug CONFIG+=x86_64 CONFIG+=qml_debug"
elif [ "$1" == "profile" ];then 
    destFolder="build-Profile"
    compileParam="-spec macx-clang CONFIG+=x86_64 CONFIG+=qml_debug CONFIG+=qtquickcompiler CONFIG+=force_debug_info CONFIG+=separate_debug_info"
elif [ "$1" == "clean" ];then
    rm -rf build-Release build-Debug build-Profile
    echo "clean Succ!"
    return
fi

echo "DestFolder = $destFolder"
mkdir -p $destFolder
cd ${destFolder}

echo "qmake..."
qmake ../${projectName}/${projectName}.pro $compileParam 

echo "make qmake_all..."
make -f Makefile qmake_all

echo "make j4..."
make -f Makefile -j4

cd ${currentDir}
