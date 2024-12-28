PYBULLETTIMEDIR:=$(abspath ../../PyBulletTime)
VENVDIR:=$(PYBULLETTIMEDIR)/.venv
MAKEVARS_FILE:=$(PYBULLETTIMEDIR)/cfg/Makevars.mk
include $(MAKEVARS_FILE)

BRAIN_FILE:=../code/BeeveeBIM.dtoml

../code/BeeveeBIM.ulam:	makeBeeveeSources.py $(BRAIN_FILE) $(SPINE_FILE) $(MAKEVARS_FILE) Makefile*
	. $(VENVDIR)/bin/activate && \
	./$< $(BRAIN_FILE) $(SPINE_FILE) > $@
