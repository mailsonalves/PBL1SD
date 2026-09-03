TOP_MODULE = gpu_de1_soc_top
CPP_MAIN   = sim_main.cpp

VERILATOR_FLAGS = -Wall --cc $(TOP_MODULE).v --exe $(CPP_MAIN) \
                  -Wno-fatal -Wno-WIDTH -Wno-CASEINCOMPLETE -Wno-COMBDLY -Wno-EOFNEWLINE \
                  -LDFLAGS "-lmingw32 -lSDL2main -lSDL2" -CFLAGS "-I/mingw64/include/SDL2"

all: run

build:
	verilator $(VERILATOR_FLAGS)
	mingw32-make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)

run: build
	./obj_dir/V$(TOP_MODULE).exe

clean:
	rm -rf obj_dir
