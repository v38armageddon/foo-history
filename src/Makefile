CC=gcc
PROG=main
PROG2=bar
PROG3=whiskey
PROG4=vodka
PROG5=mojito
PROG6=wine

${PROG}:install
	${CC} -o ${PROG} ${PROG}.c ${PROG1}.c ${PROG2}.c ${PROG3}.c ${PROG4}.c ${PROG5}.c ${PROG6}.c
	sudo mv ${PROG} /usr/local/bin
	echo "Game successfully installed."

${PROG}:uninstall
	sudo rm /usr/local/bin/${PROG}
	echo "Game successfully uninstalled."

${PROG}:extract
	${CC} -o ${PROG} ${PROG}.c ${PROG1}.c ${PROG2}.c ${PROG3}.c ${PROG4}.c ${PROG5}.c ${PROG6}.c
	echo "Game extracted into the 'src' folder."