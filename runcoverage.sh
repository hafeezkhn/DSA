mkdir build||rm -fr build/*  ;cd build;cmake ..
make -j8
./runTests > /dev/null
gcov -b runTests --object-file CMakeFiles/runTests.dir/main.cpp.gcno
python3.8 --version
if [ $? -eq 0 ]
then
	echo "generating gcovr reports...\n"
	sleep 5
	python3.8 -m gcovr -g -r ..  --html-nested coverage.html
	mkdir Results||rm -rf Results && mv cover* ./Results
	firefox Results/coverage.html
else
	echo "python>=3.8 not installed\n...generating lcov reports"
	sleep 5
	lcov -c -d .. -o my.info
	genhtml -o results/ my.info
	firefox results/index.html
fi

