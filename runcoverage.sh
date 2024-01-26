mkdir build||rm -fr build/*  ;cd build;cmake ..
make -j8
./runTests > /dev/null
gcov -b runTests --object-file CMakeFiles/runTests.dir/main.cpp.gcno
lcov -c -d .. -o my.info
genhtml -o results/ my.info
firefox results/index.html

