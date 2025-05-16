PYBULLETTIMEDIR:=$(abspath ../../PyBulletTime)
VENVDIR:=$(PYBULLETTIMEDIR)/.venv
MAKEVARS_FILE:=$(PYBULLETTIMEDIR)/cfg/Makevars.mk
include $(MAKEVARS_FILE)

xblock:	../code/BeeveeBIMXBlock.ulam

xbar:	../code/BeeveeBIM.ulam

BRAIN_FILE:=../code/BeeveeBIM.dtoml
XBLOCK_BRAIN_FILE:=../code/BeeveeBIMXBlock.dtoml
XBLOCK_GRIPINFO_FILE:=../code/Grips10.dtoml
XBLOCK_CODEINFO_FILE:=../code/Code12.dtoml

../code/BeeveeBIM.ulam:	makeBeeveeSources.py $(BRAIN_FILE) $(SPINE_FILE) $(MAKEVARS_FILE) Makefile*
	. $(VENVDIR)/bin/activate && \
	./$< $(BRAIN_FILE) $(SPINE_FILE) > $@

../code/BeeveeBIMXBlock.ulam:	makeBeeveeXBlockSources.py $(XBLOCK_CODEINFO_FILE) $(XBLOCK_GRIPINFO_FILE) $(XBLOCK_BRAIN_FILE) $(SPINE_FILE) $(MAKEVARS_FILE) Makefile*
	chmod -f u+w $@  || echo "NO $@ - NOT UNPROTECTING"        # allowing nuking
	. $(VENVDIR)/bin/activate && \
	./$< $(XBLOCK_BRAIN_FILE) $(SPINE_FILE) $(XBLOCK_GRIPINFO_FILE) $(XBLOCK_CODEINFO_FILE) > $@
	chmod a-w $@        # try to prevent editing the generated code you norg
