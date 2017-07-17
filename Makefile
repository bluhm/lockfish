.include <bsd.own.mk>
SYSOBJDIR?=	${BSDSRCDIR}/sys/arch/${MACHINE}/compile/GENERIC.MP/obj

.MAIN: buildcg

.PHONY: buildcg cpp clean

clean:
	rm -f stamp-* csource/*.{i,d} *.pyc clan/*.pyc tests/*.pyc

.include "${SYSOBJDIR}/Makefile"
S=${SYSOBJDIR}/../../../../..

buildcg: stamp-cpp
	ulimit -d `ulimit -d -H`; python2.7 buildcg.py roots if_get

results/sbreserve: stamp-cpp
	ulimit -d `ulimit -d -H`; python2.7 buildcg.py roots ${@:T} | tee $@

cpp: ${CFILES:S/.c$/.i/}

stamp-cpp: ${CFILES}
	rm -f $@
	${MAKE} -j 4 cpp
	date >$@

.SUFFIXES: .c .i

.c.i:
	cd ${SYSOBJDIR} && ${NORMAL_C} -I${SYSOBJDIR} -E -o ${@:T:S,^,${.OBJDIR}/csource/,}

test:
	pushd tests && ./run.sh && popd
