BUILD_DIR = build
EXEC = /build/snake2.app/Contents/MacOS/snake2


.PHONY: all clean test rebuild

all: install open


install:
	[-d $(BUILD_DIR)] || mkdir -p $(BUILD_DIR)
	cd build && qmake6 ../snake2 && make -j4 

uninstall:
	rm -Rf $(BUILD_DIR)
	
open:
	.$(EXEC)

clang-format:
	clang-format -style=Google -i ./snake2/*.h
	clang-format -style=Google -i ./snake2/*.cpp  
