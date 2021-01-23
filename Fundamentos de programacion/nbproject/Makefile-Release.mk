#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_1-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Estructuras/Array.o \
	${OBJECTDIR}/Estructuras/If.o \
	${OBJECTDIR}/Estructuras/While.o \
	${OBJECTDIR}/Problemario_01/Aprobado-reprobado.o \
	${OBJECTDIR}/Problemario_01/Arreglo\ de\ direcciones.o \
	${OBJECTDIR}/Problemario_01/Cadena\ de\ caracteres.o \
	${OBJECTDIR}/Problemario_01/Cambio\ de\ valor.o \
	${OBJECTDIR}/Problemario_01/Casilla\ de\ ajedrez.o \
	${OBJECTDIR}/Problemario_01/Contador\ de\ positivos.o \
	${OBJECTDIR}/Problemario_01/Dirección\ de\ variable.o \
	${OBJECTDIR}/Problemario_01/Factorial.o \
	${OBJECTDIR}/Problemario_01/Fibonacci\ con\ funciones.o \
	${OBJECTDIR}/Problemario_01/Funciones\ punteros.o \
	${OBJECTDIR}/Problemario_01/Grados\ a\ radianes.o \
	${OBJECTDIR}/Problemario_01/Llenar\ un\ arreglo.o \
	${OBJECTDIR}/Problemario_01/Llenar\ una\ matriz.o \
	${OBJECTDIR}/Problemario_01/Longitud\ entre\ puntos.o \
	${OBJECTDIR}/Problemario_01/Matriz\ espejo.o \
	${OBJECTDIR}/Problemario_01/Mayor\ de\ dos\ números\ con\ funciones.o \
	${OBJECTDIR}/Problemario_01/Mayor\ de\ una\ matriz.o \
	${OBJECTDIR}/Problemario_01/Menú.o \
	${OBJECTDIR}/Problemario_01/Numeros\ crecientes.o \
	${OBJECTDIR}/Problemario_01/Operación\ faltante.o \
	${OBJECTDIR}/Problemario_01/Operar\ con\ arreglos.o \
	${OBJECTDIR}/Problemario_01/Ordenar\ números.o \
	${OBJECTDIR}/Problemario_01/Punteros\ de\ punteros.o \
	${OBJECTDIR}/Problemario_01/Sumatoria\ de\ la\ sumatoria.o \
	${OBJECTDIR}/Problemario_01/Triángulos.o \
	${OBJECTDIR}/Problemario_01/mcd.o \
	${OBJECTDIR}/Tareas/Análisis\ de\ cadenas.o \
	${OBJECTDIR}/Tareas/Archivos.o \
	${OBJECTDIR}/Tareas/Array\ tamaño\ n.o \
	${OBJECTDIR}/Tareas/Arrays\ y\ cadenas.o \
	${OBJECTDIR}/Tareas/Arreglo,\ fibonacci\ recorrido.o \
	${OBJECTDIR}/Tareas/Burbuja\ optimizado.o \
	${OBJECTDIR}/Tareas/Burbuja.o \
	${OBJECTDIR}/Tareas/Cabecera.o \
	${OBJECTDIR}/Tareas/Fibonacci.o \
	${OBJECTDIR}/Tareas/Funciones.o \
	${OBJECTDIR}/Tareas/Menu\ de\ funciones.o \
	${OBJECTDIR}/Tareas/Mínimo\ y\ máximo\ arreglo.o \
	${OBJECTDIR}/Tareas/Promedio\ en\ arreglo.o \
	${OBJECTDIR}/Tareas/Tabla_con_for.o \
	${OBJECTDIR}/Tareas/Tablas.o \
	${OBJECTDIR}/Tareas/Tarea_01.o \
	${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 3.o \
	${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 4.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Estructuras/Array.o: Estructuras/Array.c
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/Array.o Estructuras/Array.c

${OBJECTDIR}/Estructuras/If.o: Estructuras/If.c
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/If.o Estructuras/If.c

${OBJECTDIR}/Estructuras/While.o: Estructuras/While.c
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/While.o Estructuras/While.c

${OBJECTDIR}/Problemario_01/Aprobado-reprobado.o: Problemario_01/Aprobado-reprobado.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Aprobado-reprobado.o Problemario_01/Aprobado-reprobado.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Arreglo\ de\ direcciones.o
${OBJECTDIR}/Problemario_01/Arreglo\ de\ direcciones.o: Problemario_01/Arreglo\ de\ direcciones.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Arreglo\ de\ direcciones.o Problemario_01/Arreglo\ de\ direcciones.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Cadena\ de\ caracteres.o
${OBJECTDIR}/Problemario_01/Cadena\ de\ caracteres.o: Problemario_01/Cadena\ de\ caracteres.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Cadena\ de\ caracteres.o Problemario_01/Cadena\ de\ caracteres.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Cambio\ de\ valor.o
${OBJECTDIR}/Problemario_01/Cambio\ de\ valor.o: Problemario_01/Cambio\ de\ valor.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Cambio\ de\ valor.o Problemario_01/Cambio\ de\ valor.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Casilla\ de\ ajedrez.o
${OBJECTDIR}/Problemario_01/Casilla\ de\ ajedrez.o: Problemario_01/Casilla\ de\ ajedrez.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Casilla\ de\ ajedrez.o Problemario_01/Casilla\ de\ ajedrez.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Contador\ de\ positivos.o
${OBJECTDIR}/Problemario_01/Contador\ de\ positivos.o: Problemario_01/Contador\ de\ positivos.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Contador\ de\ positivos.o Problemario_01/Contador\ de\ positivos.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Dirección\ de\ variable.o
${OBJECTDIR}/Problemario_01/Dirección\ de\ variable.o: Problemario_01/Dirección\ de\ variable.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Dirección\ de\ variable.o Problemario_01/Dirección\ de\ variable.c

${OBJECTDIR}/Problemario_01/Factorial.o: Problemario_01/Factorial.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Factorial.o Problemario_01/Factorial.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Fibonacci\ con\ funciones.o
${OBJECTDIR}/Problemario_01/Fibonacci\ con\ funciones.o: Problemario_01/Fibonacci\ con\ funciones.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Fibonacci\ con\ funciones.o Problemario_01/Fibonacci\ con\ funciones.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Funciones\ punteros.o
${OBJECTDIR}/Problemario_01/Funciones\ punteros.o: Problemario_01/Funciones\ punteros.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Funciones\ punteros.o Problemario_01/Funciones\ punteros.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Grados\ a\ radianes.o
${OBJECTDIR}/Problemario_01/Grados\ a\ radianes.o: Problemario_01/Grados\ a\ radianes.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Grados\ a\ radianes.o Problemario_01/Grados\ a\ radianes.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Llenar\ un\ arreglo.o
${OBJECTDIR}/Problemario_01/Llenar\ un\ arreglo.o: Problemario_01/Llenar\ un\ arreglo.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Llenar\ un\ arreglo.o Problemario_01/Llenar\ un\ arreglo.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Llenar\ una\ matriz.o
${OBJECTDIR}/Problemario_01/Llenar\ una\ matriz.o: Problemario_01/Llenar\ una\ matriz.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Llenar\ una\ matriz.o Problemario_01/Llenar\ una\ matriz.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Longitud\ entre\ puntos.o
${OBJECTDIR}/Problemario_01/Longitud\ entre\ puntos.o: Problemario_01/Longitud\ entre\ puntos.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Longitud\ entre\ puntos.o Problemario_01/Longitud\ entre\ puntos.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Matriz\ espejo.o
${OBJECTDIR}/Problemario_01/Matriz\ espejo.o: Problemario_01/Matriz\ espejo.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Matriz\ espejo.o Problemario_01/Matriz\ espejo.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Mayor\ de\ dos\ números\ con\ funciones.o
${OBJECTDIR}/Problemario_01/Mayor\ de\ dos\ números\ con\ funciones.o: Problemario_01/Mayor\ de\ dos\ números\ con\ funciones.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Mayor\ de\ dos\ números\ con\ funciones.o Problemario_01/Mayor\ de\ dos\ números\ con\ funciones.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Mayor\ de\ una\ matriz.o
${OBJECTDIR}/Problemario_01/Mayor\ de\ una\ matriz.o: Problemario_01/Mayor\ de\ una\ matriz.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Mayor\ de\ una\ matriz.o Problemario_01/Mayor\ de\ una\ matriz.c

${OBJECTDIR}/Problemario_01/Menú.o: Problemario_01/Menú.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Menú.o Problemario_01/Menú.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Numeros\ crecientes.o
${OBJECTDIR}/Problemario_01/Numeros\ crecientes.o: Problemario_01/Numeros\ crecientes.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Numeros\ crecientes.o Problemario_01/Numeros\ crecientes.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Operación\ faltante.o
${OBJECTDIR}/Problemario_01/Operación\ faltante.o: Problemario_01/Operación\ faltante.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Operación\ faltante.o Problemario_01/Operación\ faltante.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Operar\ con\ arreglos.o
${OBJECTDIR}/Problemario_01/Operar\ con\ arreglos.o: Problemario_01/Operar\ con\ arreglos.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Operar\ con\ arreglos.o Problemario_01/Operar\ con\ arreglos.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Ordenar\ números.o
${OBJECTDIR}/Problemario_01/Ordenar\ números.o: Problemario_01/Ordenar\ números.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Ordenar\ números.o Problemario_01/Ordenar\ números.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Punteros\ de\ punteros.o
${OBJECTDIR}/Problemario_01/Punteros\ de\ punteros.o: Problemario_01/Punteros\ de\ punteros.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Punteros\ de\ punteros.o Problemario_01/Punteros\ de\ punteros.c

.NO_PARALLEL:${OBJECTDIR}/Problemario_01/Sumatoria\ de\ la\ sumatoria.o
${OBJECTDIR}/Problemario_01/Sumatoria\ de\ la\ sumatoria.o: Problemario_01/Sumatoria\ de\ la\ sumatoria.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Sumatoria\ de\ la\ sumatoria.o Problemario_01/Sumatoria\ de\ la\ sumatoria.c

${OBJECTDIR}/Problemario_01/Triángulos.o: Problemario_01/Triángulos.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/Triángulos.o Problemario_01/Triángulos.c

${OBJECTDIR}/Problemario_01/mcd.o: Problemario_01/mcd.c
	${MKDIR} -p ${OBJECTDIR}/Problemario_01
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Problemario_01/mcd.o Problemario_01/mcd.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Análisis\ de\ cadenas.o
${OBJECTDIR}/Tareas/Análisis\ de\ cadenas.o: Tareas/Análisis\ de\ cadenas.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Análisis\ de\ cadenas.o Tareas/Análisis\ de\ cadenas.c

${OBJECTDIR}/Tareas/Archivos.o: Tareas/Archivos.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Archivos.o Tareas/Archivos.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Array\ tamaño\ n.o
${OBJECTDIR}/Tareas/Array\ tamaño\ n.o: Tareas/Array\ tamaño\ n.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Array\ tamaño\ n.o Tareas/Array\ tamaño\ n.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Arrays\ y\ cadenas.o
${OBJECTDIR}/Tareas/Arrays\ y\ cadenas.o: Tareas/Arrays\ y\ cadenas.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Arrays\ y\ cadenas.o Tareas/Arrays\ y\ cadenas.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Arreglo,\ fibonacci\ recorrido.o
${OBJECTDIR}/Tareas/Arreglo,\ fibonacci\ recorrido.o: Tareas/Arreglo,\ fibonacci\ recorrido.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Arreglo,\ fibonacci\ recorrido.o Tareas/Arreglo,\ fibonacci\ recorrido.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Burbuja\ optimizado.o
${OBJECTDIR}/Tareas/Burbuja\ optimizado.o: Tareas/Burbuja\ optimizado.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Burbuja\ optimizado.o Tareas/Burbuja\ optimizado.c

${OBJECTDIR}/Tareas/Burbuja.o: Tareas/Burbuja.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Burbuja.o Tareas/Burbuja.c

${OBJECTDIR}/Tareas/Cabecera.o: Tareas/Cabecera.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Cabecera.o Tareas/Cabecera.c

${OBJECTDIR}/Tareas/Fibonacci.o: Tareas/Fibonacci.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Fibonacci.o Tareas/Fibonacci.c

${OBJECTDIR}/Tareas/Funciones.o: Tareas/Funciones.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Funciones.o Tareas/Funciones.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Menu\ de\ funciones.o
${OBJECTDIR}/Tareas/Menu\ de\ funciones.o: Tareas/Menu\ de\ funciones.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Menu\ de\ funciones.o Tareas/Menu\ de\ funciones.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Mínimo\ y\ máximo\ arreglo.o
${OBJECTDIR}/Tareas/Mínimo\ y\ máximo\ arreglo.o: Tareas/Mínimo\ y\ máximo\ arreglo.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Mínimo\ y\ máximo\ arreglo.o Tareas/Mínimo\ y\ máximo\ arreglo.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Promedio\ en\ arreglo.o
${OBJECTDIR}/Tareas/Promedio\ en\ arreglo.o: Tareas/Promedio\ en\ arreglo.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Promedio\ en\ arreglo.o Tareas/Promedio\ en\ arreglo.c

${OBJECTDIR}/Tareas/Tabla_con_for.o: Tareas/Tabla_con_for.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Tabla_con_for.o Tareas/Tabla_con_for.c

${OBJECTDIR}/Tareas/Tablas.o: Tareas/Tablas.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Tablas.o Tareas/Tablas.c

${OBJECTDIR}/Tareas/Tarea_01.o: Tareas/Tarea_01.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Tarea_01.o Tareas/Tarea_01.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 3.o
${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 3.o: Tareas/Tarea_02_Mayor\ de\ 3.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 3.o Tareas/Tarea_02_Mayor\ de\ 3.c

.NO_PARALLEL:${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 4.o
${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 4.o: Tareas/Tarea_02_Mayor\ de\ 4.c
	${MKDIR} -p ${OBJECTDIR}/Tareas
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tareas/Tarea_02_Mayor\ de\ 4.o Tareas/Tarea_02_Mayor\ de\ 4.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
