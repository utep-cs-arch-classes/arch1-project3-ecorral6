all:
	(cd timerLib; make install)
	(cd lcdLib; make install)
	(cd shapeLib; make install)
	(cd circleLib; make install)
	(cd p2swLib; make install)
<<<<<<< HEAD
	(cd p2sw-demo; make)
=======
>>>>>>> 55c2de4f35b28a40060637346c087af332b0e698
	(cd shape-motion-demo; make)

doc:
	rm -rf doxygen_docs
	doxygen Doxyfile
clean:
	(cd timerLib; make clean)
	(cd lcdLib; make clean)
	(cd shapeLib; make clean)
	(cd p2swLib; make clean)
<<<<<<< HEAD
	(cd p2sw-demo; make clean)
=======
>>>>>>> 55c2de4f35b28a40060637346c087af332b0e698
	(cd shape-motion-demo; make clean)
	(cd circleLib; make clean)
	rm -rf lib h
	rm -rf doxygen_docs/*
