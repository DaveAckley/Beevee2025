all:	code

code:	makescripts
	make -C code

clean:	FORCE
	make -C code clean

run:	makescripts
	make -C code run

makescripts:	FORCE
	make -C scripts

ishtar:	FORCE
	make -C code ishtar

.PHONY:	FORCE
