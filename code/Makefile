NAME:=$(notdir $(realpath ..))
THIS_DIR:=$(strip $(notdir $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))))
MFZ:=../$(NAME).mfz
# Customize ULAM_BIN_DIR and MFM_BIN_DIR if necessary
ULAM_BIN_DIR:=/data/ackley/PART4/code/E/ULAM/bin
MFM_BIN_DIR:=/data/ackley/PART4/code/E/MFM/bin
ULAM:=$(ULAM_BIN_DIR)/ulam
MFZRUN:=$(MFM_BIN_DIR)/mfzrun
#UFLAGS:=-g
#UFLAGS:=--sa
UFLAGS:=-o
ARGS_TXT_FILES:=$(wildcard args.txt)
ULAM_FILES:=$(wildcard *.ulam)
FONTDIR_FILES:=$(wildcard fonts/*.ulam)
#$(info FONTDIR_FILES $(FONTDIR_FILES))
FONTS_FILES+=$(patsubst fonts/%.ulam,%.ulam,$(FONTDIR_FILES))
H_FILES:=$(sort $(wildcard *.h))
TCC_FILES:=$(sort $(wildcard *.tcc))
INC_FILES:=$(wildcard *.inc)
TIMESTAMP:=$(shell date +%Y%m%d-%H%M%S)
DEV:=$(shell whoami)
ISHNAME:=$(TIMESTAMP)-$(DEV)
ALL_MFZ_FILES:=$(sort $(ULAM_FILES) $(TCC_FILES) $(H_FILES) $(ARGS_TXT_FILES) $(FONTS_FILES) FixedPoint.ulam)

all:	$(MFZ)

run:	$(MFZ)
	$(MFZRUN) $(MFZ)

$(MFZ):	$(ULAM_FILES) $(TCC_FILES) $(H_FILES) $(ARGS_TXT_FILES) FixedPoint.ulam Makefile $(FONTDIR_FILES)
	$(ULAM) --sd ./fonts $(UFLAGS) $(ALL_MFZ_FILES) $(MFZ)

FixedPoint.ulam: ../../FixedPoint/code/FixedPoint.ulam
	cp $^ $@

clean:
	rm -f *~
	rm -rf .gen

realclean: clean
	rm -f $(MFZ)

ishtar:
	@make clean
	@make >ISH-BUILD-STDOUT.txt 2>ISH-BUILD-STDERR.txt || true
	@cd ..;tar cvzf $(ISHNAME).tgz $(THIS_DIR) --transform s/^$(THIS_DIR)/$(ISHNAME)/
	@echo Made ../$(ISHNAME).tgz

.PHONY:	all mfz clean realclean tar ishtar

