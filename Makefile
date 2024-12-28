all:	code

code:	scripts
	make -C code

clean:	FORCE
	make -C code clean

run:	scripts
	make -C code run

scripts:	FORCE
	cd scripts; make

ishtar:	FORCE
	make -C code ishtar

.PHONY:	FORCE
