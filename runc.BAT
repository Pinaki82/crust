@ECHO OFF
REM    MSYS2 64-bit is a hard dependency
REM    runc.BAT

REM     Create the build directory 'target' if it is not present
REM md code/testbed/target
REM cd code/testbed/target
@ECHO ON


cd code
cd testbed
cd target
cmake -G "MinGW Makefiles" ..


@ECHO OFF
REM # [Fish:]
REM # make -j (nproc)
REM # [Bash:] // https://stackoverflow.com/questions/15289250/using-make-with-j4-or-j8
@ECHO ON


mingw32-make -j4
testbed.exe

cargo run

cd ../../../

cmd
