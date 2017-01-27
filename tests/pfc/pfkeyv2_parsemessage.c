# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c"
# 71 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/pf.h" 1
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_null.h" 1
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/cdefs.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/cdefs.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cdefs.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/cdefs.h" 2
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/endian.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/endian.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h" 1
# 36 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_types.h" 1
# 37 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_types.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/_types.h" 1
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/_types.h"
typedef struct label_t {
 long val[8];
} label_t;



typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;


typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;


typedef __int32_t __int_fast8_t;
typedef __uint32_t __uint_fast8_t;
typedef __int32_t __int_fast16_t;
typedef __uint32_t __uint_fast16_t;
typedef __int32_t __int_fast32_t;
typedef __uint32_t __uint_fast32_t;
typedef __int64_t __int_fast64_t;
typedef __uint64_t __uint_fast64_t;
# 102 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/_types.h"
typedef long __intptr_t;
typedef unsigned long __uintptr_t;


typedef __int64_t __intmax_t;
typedef __uint64_t __uintmax_t;


typedef long __register_t;


typedef unsigned long __vaddr_t;
typedef unsigned long __paddr_t;
typedef unsigned long __vsize_t;
typedef unsigned long __psize_t;


typedef double __double_t;
typedef float __float_t;
typedef long __ptrdiff_t;
typedef unsigned long __size_t;
typedef long __ssize_t;

typedef __builtin_va_list __va_list;






typedef int __wchar_t;

typedef int __wint_t;
typedef int __rune_t;
typedef void * __wctrans_t;
typedef void * __wctype_t;
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_types.h" 2

typedef __int64_t __blkcnt_t;
typedef __int32_t __blksize_t;
typedef __int64_t __clock_t;
typedef __int32_t __clockid_t;
typedef unsigned long __cpuid_t;
typedef __int32_t __dev_t;
typedef __uint32_t __fixpt_t;
typedef __uint64_t __fsblkcnt_t;
typedef __uint64_t __fsfilcnt_t;
typedef __uint32_t __gid_t;
typedef __uint32_t __id_t;
typedef __uint32_t __in_addr_t;
typedef __uint16_t __in_port_t;
typedef __uint64_t __ino_t;
typedef long __key_t;
typedef __uint32_t __mode_t;
typedef __uint32_t __nlink_t;
typedef __int64_t __off_t;
typedef __int32_t __pid_t;
typedef __uint64_t __rlim_t;
typedef __uint8_t __sa_family_t;
typedef __int32_t __segsz_t;
typedef __uint32_t __socklen_t;
typedef long __suseconds_t;
typedef __int32_t __swblk_t;
typedef __int64_t __time_t;
typedef __int32_t __timer_t;
typedef __uint32_t __uid_t;
typedef __uint32_t __useconds_t;





typedef union {
 char __mbstate8[128];
 __int64_t __mbstateL;
} __mbstate_t;
# 37 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/endian.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_endian.h" 2
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/endian.h" 2
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h" 2





typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;

typedef __cpuid_t cpuid_t;
typedef __register_t register_t;
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
typedef __int8_t int8_t;




typedef __uint8_t uint8_t;




typedef __int16_t int16_t;




typedef __uint16_t uint16_t;




typedef __int32_t int32_t;




typedef __uint32_t uint32_t;




typedef __int64_t int64_t;




typedef __uint64_t uint64_t;



typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef __int64_t quad_t;
typedef __uint64_t u_quad_t;



typedef __vaddr_t vaddr_t;
typedef __paddr_t paddr_t;
typedef __vsize_t vsize_t;
typedef __psize_t psize_t;



typedef __blkcnt_t blkcnt_t;
typedef __blksize_t blksize_t;
typedef char * caddr_t;
typedef __int32_t daddr32_t;
typedef __int64_t daddr_t;
typedef __dev_t dev_t;
typedef __fixpt_t fixpt_t;
typedef __gid_t gid_t;
typedef __id_t id_t;
typedef __ino_t ino_t;
typedef __key_t key_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __rlim_t rlim_t;
typedef __segsz_t segsz_t;
typedef __swblk_t swblk_t;
typedef __uid_t uid_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
# 162 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
typedef __in_addr_t in_addr_t;
typedef __in_port_t in_port_t;






typedef __clock_t clock_t;




typedef __clockid_t clockid_t;




typedef __pid_t pid_t;




typedef __size_t size_t;




typedef __ssize_t ssize_t;




typedef __time_t time_t;




typedef __timer_t timer_t;




typedef __off_t off_t;
# 234 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/types.h"
struct proc;
struct pgrp;
struct ucred;
struct rusage;
struct file;
struct buf;
struct tty;
struct uio;
# 51 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 60 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/syslimits.h" 1
# 61 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/errno.h" 1
# 76 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h" 1
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/select.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/select.h"
struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 70 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/select.h"
typedef uint32_t __fd_mask;



typedef struct fd_set {
 __fd_mask fds_bits[(((1024) + ((((unsigned)(sizeof(__fd_mask) * 8))) - 1)) / (((unsigned)(sizeof(__fd_mask) * 8))))];
} fd_set;

static __inline void
__fd_set(int fd, fd_set *p)
{
 p->fds_bits[fd / ((unsigned)(sizeof(__fd_mask) * 8))] |= (1U << (fd % ((unsigned)(sizeof(__fd_mask) * 8))));
}


static __inline void
__fd_clr(int fd, fd_set *p)
{
 p->fds_bits[fd / ((unsigned)(sizeof(__fd_mask) * 8))] &= ~(1U << (fd % ((unsigned)(sizeof(__fd_mask) * 8))));
}


static __inline int
__fd_isset(int fd, const fd_set *p)
{
 return (p->fds_bits[fd / ((unsigned)(sizeof(__fd_mask) * 8))] & (1U << (fd % ((unsigned)(sizeof(__fd_mask) * 8)))));
}
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h" 2
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 144 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_time.h" 1
# 55 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/_time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 164 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h" 2


struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *bt, uint64_t x)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += x;
 if (u > bt->frac)
  bt->sec++;
}

static __inline void
bintime_add(struct bintime *bt, struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += bt2->frac;
 if (u > bt->frac)
  bt->sec++;
 bt->sec += bt2->sec;
}

static __inline void
bintime_sub(struct bintime *bt, struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac -= bt2->frac;
 if (u < bt->frac)
  bt->sec--;
 bt->sec -= bt2->sec;
}
# 220 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
static __inline void
bintime2timespec(struct bintime *bt, struct timespec *ts)
{

 ts->tv_sec = bt->sec;
 ts->tv_nsec = (long)(((uint64_t)1000000000 * (uint32_t)(bt->frac >> 32)) >> 32);
}

static __inline void
timespec2bintime(struct timespec *ts, struct bintime *bt)
{

 bt->sec = ts->tv_sec;

 bt->frac = (uint64_t)ts->tv_nsec * (uint64_t)18446744073ULL;
}

static __inline void
bintime2timeval(struct bintime *bt, struct timeval *tv)
{

 tv->tv_sec = bt->sec;
 tv->tv_usec = (long)(((uint64_t)1000000 * (uint32_t)(bt->frac >> 32)) >> 32);
}

static __inline void
timeval2bintime(struct timeval *tv, struct bintime *bt)
{

 bt->sec = (time_t)tv->tv_sec;

 bt->frac = (uint64_t)tv->tv_usec * (uint64_t)18446744073709ULL;
}

extern volatile time_t time_second;
extern volatile time_t time_uptime;
# 278 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/time.h"
void bintime(struct bintime *);
void nanotime(struct timespec *);
void microtime(struct timeval *);

void getnanotime(struct timespec *);
void getmicrotime(struct timeval *);

void binuptime(struct bintime *);
void nanouptime(struct timespec *);
void microuptime(struct timeval *);

void getnanouptime(struct timespec *);
void getmicrouptime(struct timeval *);

struct proc;
int clock_gettime(struct proc *, clockid_t, struct timespec *);

int timespecfix(struct timespec *);
int itimerfix(struct timeval *);
int itimerdecr(struct itimerval *itp, int usec);
void itimerround(struct timeval *);
int settime(struct timespec *);
int ratecheck(struct timeval *, const struct timeval *);
int ppsratecheck(struct timeval *, int *, int);




struct clock_ymdhms {
        u_short dt_year;
        u_char dt_mon;
        u_char dt_day;
        u_char dt_wday;
        u_char dt_hour;
        u_char dt_min;
        u_char dt_sec;
};

time_t clock_ymdhms_to_secs(struct clock_ymdhms *);
void clock_secs_to_ymdhms(time_t, struct clock_ymdhms *);
# 77 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/resource.h" 1
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;

};
# 98 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/resource.h"
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};



struct loadavg {
 fixpt_t ldavg[3];
 long fscale;
};



extern struct loadavg averunnable;
struct process;
int dosetrlimit(struct proc *, u_int, struct rlimit *);
int donice(struct proc *, struct process *, int);
int dogetrusage(struct proc *, int, struct rusage *);
# 78 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ucred.h" 1
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ucred.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/syslimits.h" 1
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/ucred.h" 2




struct ucred {
 u_int cr_ref;



 uid_t cr_uid;
 uid_t cr_ruid;
 uid_t cr_svuid;
 gid_t cr_gid;
 gid_t cr_rgid;
 gid_t cr_svgid;
 short cr_ngroups;
 gid_t cr_groups[16];
};






struct xucred {
 uid_t cr_uid;
 gid_t cr_gid;
 short cr_ngroups;
 gid_t cr_groups[16];
};






int crfromxucred(struct ucred *, const struct xucred *);
void crset(struct ucred *, const struct ucred *);
struct ucred *crcopy(struct ucred *cr);
struct ucred *crdup(struct ucred *cr);
void crfree(struct ucred *cr);
struct ucred *crget(void);
int suser(struct proc *p, u_int flags);
int suser_ucred(struct ucred *cred);
# 79 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/uio.h" 1
# 51 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/uio.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};


enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE
};



struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 size_t uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct proc *uio_procp;
};
# 97 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/uio.h"
int ureadc(int c, struct uio *);

struct file;
int dofilereadv(struct proc *, int, struct file *,
     const struct iovec *, int, int, off_t *, register_t *);
int dofilewritev(struct proc *, int, struct file *,
     const struct iovec *, int, int, off_t *, register_t *);
# 80 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h" 1
# 22 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/refcnt.h" 1
# 22 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/refcnt.h"
struct refcnt {
 unsigned int refs;
};





void refcnt_init(struct refcnt *);
void refcnt_take(struct refcnt *);
int refcnt_rele(struct refcnt *);
void refcnt_rele_wake(struct refcnt *);
void refcnt_finalize(struct refcnt *, const char *);
# 23 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h" 2
# 32 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h"
struct srp {
 void *ref;
};



struct srp_hazard {
 struct srp *sh_p;
 void *sh_v;
};

struct srp_ref {
 struct srp_hazard *hz;
} __attribute__((__unused__));



struct srp_gc {
 void (*srp_gc_dtor)(void *, void *);
 void *srp_gc_cookie;
 struct refcnt srp_gc_refcnt;
};







struct srpl_rc {
 void (*srpl_ref)(void *, void *);
 struct srp_gc srpl_gc;
};




struct srpl {
 struct srp sl_head;
};



void srp_startup(void);
void srp_gc_init(struct srp_gc *, void (*)(void *, void *), void *);
void *srp_swap_locked(struct srp *, void *);
void srp_update_locked(struct srp_gc *, struct srp *, void *);
void *srp_get_locked(struct srp *);
void srp_gc_finalize(struct srp_gc *);

void srp_init(struct srp *);
# 101 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/srp.h"
void srpl_rc_init(struct srpl_rc *, void (*)(void *, void *),
      void (*)(void *, void *), void *);
# 81 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h"
typedef int sig_atomic_t;


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/trap.h" 1
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h" 2
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/signal.h"
struct sigcontext {

 long sc_rdi;
 long sc_rsi;
 long sc_rdx;
 long sc_rcx;
 long sc_r8;
 long sc_r9;
 long sc_r10;
 long sc_r11;
 long sc_r12;
 long sc_r13;
 long sc_r14;
 long sc_r15;
 long sc_rbp;
 long sc_rbx;
 long sc_rax;
 long sc_gs;
 long sc_fs;
 long sc_es;
 long sc_ds;
 long sc_trapno;
 long sc_err;
 long sc_rip;
 long sc_cs;
 long sc_rflags;
 long sc_rsp;
 long sc_ss;

 struct fxsave64 *sc_fpstate;
 int __sc_unused;
 int sc_mask;
 long sc_cookie;
};
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h" 2
# 104 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
typedef unsigned int sigset_t;


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h" 1
# 33 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
union sigval {
 int sival_int;
 void *sival_ptr;
};
# 132 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
typedef struct {
 int si_signo;
 int si_code;
 int si_errno;
 union {
  int _pad[((128 / sizeof (int)) - 3)];
  struct {
   pid_t _pid;
   union {
    struct {
     uid_t _uid;
     union sigval _value;
    } _kill;
    struct {
     clock_t _utime;
     clock_t _stime;
     int _status;
    } _cld;
   } _pdata;
  } _proc;
  struct {
   caddr_t _addr;
   int _trapno;
  } _fault;
# 172 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
 } _data;
} siginfo_t;
# 196 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/siginfo.h"
void initsiginfo(siginfo_t *, int, u_long, int, union sigval);
# 108 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h" 2




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, siginfo_t *, void *);
 } __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 146 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
typedef void (*sig_t)(int);





struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 176 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/signal.h"
typedef struct sigaltstack {
 void *ss_sp;
 size_t ss_size;
 int ss_flags;
} stack_t;





typedef struct sigcontext ucontext_t;
# 85 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/limits.h" 1
# 34 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/limits.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/limits.h" 1
# 35 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/limits.h" 2
# 88 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/param.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/param.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 1
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h" 1
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/fpu.h" 1
# 16 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/fpu.h"
struct fxsave64 {
 u_int16_t fx_fcw;
 u_int16_t fx_fsw;
 u_int8_t fx_ftw;
 u_int8_t fx_unused1;
 u_int16_t fx_fop;
 u_int64_t fx_rip;
 u_int64_t fx_rdp;
 u_int32_t fx_mxcsr;
 u_int32_t fx_mxcsr_mask;
 u_int64_t fx_st[8][2];
 u_int64_t fx_xmm[16][2];
 u_int8_t fx_unused3[96];
} __attribute__((__packed__));

struct xstate_hdr {
 uint64_t xstate_bv;
 uint64_t xstate_xcomp_bv;
 uint8_t xstate_rsrv0[0];
 uint8_t xstate_rsrv[40];
} __attribute__((__packed__));

struct savefpu {
 struct fxsave64 fp_fxsave;
 struct xstate_hdr fp_xstate;
 u_int64_t fp_ymm[16][2];
 u_int16_t fp_ex_sw;
 u_int16_t fp_ex_tw;
};
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/fpu.h"
struct trapframe;
struct cpu_info;

extern size_t fpu_save_len;
extern uint32_t fpu_mxcsr_mask;
extern uint64_t xsave_mask;

void fpuinit(struct cpu_info *);
void fpudrop(void);
void fpudiscard(struct proc *);
void fputrap(struct trapframe *);
void fpusave_proc(struct proc *, int);
void fpusave_cpu(struct cpu_info *, int);
void fpu_kernel_enter(void);
void fpu_kernel_exit(void);
# 76 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h" 2
# 84 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/frame.h"
struct trapframe {
 int64_t tf_rdi;
 int64_t tf_rsi;
 int64_t tf_rdx;
 int64_t tf_rcx;
 int64_t tf_r8;
 int64_t tf_r9;
 int64_t tf_r10;
 int64_t tf_r11;
 int64_t tf_r12;
 int64_t tf_r13;
 int64_t tf_r14;
 int64_t tf_r15;
 int64_t tf_rbp;
 int64_t tf_rbx;
 int64_t tf_rax;
 int64_t tf_gs;
 int64_t tf_fs;
 int64_t tf_es;
 int64_t tf_ds;
 int64_t tf_trapno;

 int64_t tf_err;
 int64_t tf_rip;
 int64_t tf_cs;
 int64_t tf_rflags;

 int64_t tf_rsp;
 int64_t tf_ss;
};




struct intrframe {
 int64_t if_ppl;
 int64_t if_rdi;
 int64_t if_rsi;
 int64_t if_rdx;
 int64_t if_rcx;
 int64_t if_r8;
 int64_t if_r9;
 int64_t if_r10;
 int64_t if_r11;
 int64_t if_r12;
 int64_t if_r13;
 int64_t if_r14;
 int64_t if_r15;
 int64_t if_rbp;
 int64_t if_rbx;
 int64_t if_rax;
 int64_t tf_gs;
 int64_t tf_fs;
 int64_t tf_es;
 int64_t tf_ds;
 u_int64_t __if_trapno;
 u_int64_t __if_err;

 int64_t if_rip;
 int64_t if_cs;
 int64_t if_rflags;

 int64_t if_rsp;
 int64_t if_ss;
};




struct switchframe {
 int64_t sf_r15;
 int64_t sf_r14;
 int64_t sf_r13;
 int64_t sf_r12;
 int64_t sf_rbp;
 int64_t sf_rbx;
 int64_t sf_rip;
};

struct callframe {
 struct callframe *f_frame;
 long f_retaddr;
 long f_arg0;
};
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/segments.h" 1
# 95 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/segments.h"
struct sys_segment_descriptor {
 u_int64_t sd_lolimit:16;
 u_int64_t sd_lobase:24;
 u_int64_t sd_type:5;
 u_int64_t sd_dpl:2;
 u_int64_t sd_p:1;
 u_int64_t sd_hilimit:4;
 u_int64_t sd_xx1:3;
 u_int64_t sd_gran:1;
 u_int64_t sd_hibase:40;
 u_int64_t sd_xx2:8;
 u_int64_t sd_zero:5;
 u_int64_t sd_xx3:19;
} __attribute__((__packed__));




struct mem_segment_descriptor {
 unsigned int sd_lolimit:16;
 unsigned int sd_lobase:24;
 unsigned int sd_type:5;
 unsigned int sd_dpl:2;
 unsigned int sd_p:1;
 unsigned int sd_hilimit:4;
 unsigned int sd_avl:1;
 unsigned int sd_long:1;
 unsigned int sd_def32:1;
 unsigned int sd_gran:1;
 unsigned int sd_hibase:8;
} __attribute__((__packed__));




struct gate_descriptor {
 u_int64_t gd_looffset:16;
 u_int64_t gd_selector:16;
 u_int64_t gd_ist:3;
 u_int64_t gd_xx1:5;
 u_int64_t gd_type:5;
 u_int64_t gd_dpl:2;
 u_int64_t gd_p:1;
 u_int64_t gd_hioffset:48;
 u_int64_t gd_xx2:8;
 u_int64_t gd_zero:5;
 u_int64_t gd_xx3:19;
} __attribute__((__packed__));




struct region_descriptor {
 u_int16_t rd_limit;
 u_int64_t rd_base;
} __attribute__((__packed__));


extern struct gate_descriptor *idt;

void setgate(struct gate_descriptor *, void *, int, int, int, int);
void unsetgate(struct gate_descriptor *);
void setregion(struct region_descriptor *, void *, u_int16_t);
void set_sys_segment(struct sys_segment_descriptor *, void *, size_t,
     int, int, int);
void set_mem_segment(struct mem_segment_descriptor *, void *, size_t,
     int, int, int, int, int);
int idt_vec_alloc(int, int);
void idt_vec_set(int, void (*)(void));
void idt_vec_free(int);
void cpu_init_idt(void);
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cacheinfo.h" 1






struct x86_cache_info {
 uint8_t cai_index;
 uint8_t cai_desc;
 uint8_t cai_associativity;
 u_int cai_totalsize;
 u_int cai_linesize;
 const char *cai_string;
};
# 27 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cacheinfo.h"
struct cpu_info;

const struct x86_cache_info *cache_info_lookup(const struct x86_cache_info *,
            u_int8_t);
void amd_cpu_cacheinfo(struct cpu_info *);
void x86_print_cacheinfo(struct cpu_info *);
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intrdefs.h" 1
# 49 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/queue.h" 1
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h" 2





enum devclass {
 DV_DULL,
 DV_CPU,
 DV_DISK,
 DV_IFNET,
 DV_TAPE,
 DV_TTY
};
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h"
struct device {
 enum devclass dv_class;
 struct { struct device *tqe_next; struct device **tqe_prev; } dv_list;
 struct cfdata *dv_cfdata;
 int dv_unit;
 char dv_xname[16];
 struct device *dv_parent;
 int dv_flags;
 int dv_ref;
};




struct devicelist { struct device *tqh_first; struct device **tqh_last; };




struct cfdata {
 struct cfattach *cf_attach;
 struct cfdriver *cf_driver;
 short cf_unit;
 short cf_fstate;
 long *cf_loc;
 int cf_flags;
 short *cf_parents;
 int cf_locnames;
 short cf_starunit1;
};
extern struct cfdata cfdata[];






typedef int (*cfmatch_t)(struct device *, void *, void *);
typedef void (*cfscan_t)(struct device *, void *);
# 127 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/device.h"
struct cfattach {
 size_t ca_devsize;
 cfmatch_t ca_match;
 void (*ca_attach)(struct device *, struct device *, void *);
 int (*ca_detach)(struct device *, int);
 int (*ca_activate)(struct device *, int);
};





struct cfdriver {
 void **cd_devs;
 char *cd_name;
 enum devclass cd_class;
 int cd_indirect;
 int cd_ndevs;
};







typedef int (*cfprint_t)(void *, const char *);







struct pdevinit {
 void (*pdev_attach)(int);
 int pdev_count;
};


extern struct devicelist alldevs;

extern int autoconf_verbose;
extern volatile int config_pending;

void config_init(void);
void *config_search(cfmatch_t, struct device *, void *);
struct device *config_found_sm(struct device *, void *, cfprint_t,
    cfmatch_t);
struct device *config_rootfound(char *, void *);
void config_scan(cfscan_t, struct device *);
struct device *config_attach(struct device *, void *, void *, cfprint_t);
int config_detach(struct device *, int);
int config_detach_children(struct device *, int);
int config_deactivate(struct device *);
int config_suspend(struct device *, int);
int config_suspend_all(int);
int config_activate_children(struct device *, int);
struct device *config_make_softc(struct device *parent,
    struct cfdata *cf);
void config_defer(struct device *, void (*)(struct device *));
void config_pending_incr(void);
void config_pending_decr(void);
void config_mountroot(struct device *, void (*)(struct device *));
void config_process_deferred_mountroot(void);

struct device *device_mainbus(void);
struct device *device_mpath(void);
struct device *device_lookup(struct cfdriver *, int unit);
void device_ref(struct device *);
void device_unref(struct device *);

struct nam2blk {
 char *name;
 int maj;
};

int findblkmajor(struct device *dv);
char *findblkname(int);
void setroot(struct device *, int, int);
struct device *getdisk(char *str, int len, int defpart, dev_t *devp);
struct device *parsedisk(char *str, int len, int defpart, dev_t *devp);
void device_register(struct device *, void *);

int loadfirmware(const char *name, u_char **bufp, size_t *buflen);
# 52 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h" 1
# 96 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h"
struct schedstate_percpu {
 struct timespec spc_runtime;
 volatile int spc_schedflags;
 u_int spc_schedticks;
 u_int64_t spc_cp_time[5];
 u_char spc_curpriority;
 int spc_rrticks;
 int spc_pscnt;
 int spc_psdiv;
 struct proc *spc_idleproc;

 u_int spc_nrun;
 fixpt_t spc_ldavg;

 struct prochead { struct proc *tqh_first; struct proc **tqh_last; } spc_qs[32];
 volatile uint32_t spc_whichqs;




 struct { struct proc *lh_first; } spc_deadproc;

 volatile int spc_barrier;
};
# 134 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h"
extern int schedhz;
extern int rrticks_init;

struct proc;
void schedclock(struct proc *);
struct cpu_info;
void roundrobin(struct cpu_info *);
void scheduler_start(void);
void userret(struct proc *p);

void sched_init_cpu(struct cpu_info *);
void sched_idle(void *);
void sched_exit(struct proc *);
void mi_switch(void);
void cpu_switchto(struct proc *, struct proc *);
struct proc *sched_chooseproc(void);
struct cpu_info *sched_choosecpu(struct proc *);
struct cpu_info *sched_choosecpu_fork(struct proc *parent, int);
void cpu_idle_enter(void);
void cpu_idle_cycle(void);
void cpu_idle_leave(void);
void sched_peg_curproc(struct cpu_info *ci);
void sched_barrier(struct cpu_info *ci);

int sysctl_hwsetperf(void *, size_t *, void *, size_t);
int sysctl_hwperfpolicy(void *, size_t *, void *, size_t);
# 168 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sched.h"
void sched_init_runqueues(void);
void setrunqueue(struct proc *);
void remrunqueue(struct proc *);
# 53 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sensors.h" 1
# 33 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sensors.h"
enum sensor_type {
 SENSOR_TEMP,
 SENSOR_FANRPM,
 SENSOR_VOLTS_DC,
 SENSOR_VOLTS_AC,
 SENSOR_OHMS,
 SENSOR_WATTS,
 SENSOR_AMPS,
 SENSOR_WATTHOUR,
 SENSOR_AMPHOUR,
 SENSOR_INDICATOR,
 SENSOR_INTEGER,
 SENSOR_PERCENT,
 SENSOR_LUX,
 SENSOR_DRIVE,
 SENSOR_TIMEDELTA,
 SENSOR_HUMIDITY,
 SENSOR_FREQ,
 SENSOR_ANGLE,
 SENSOR_DISTANCE,
 SENSOR_PRESSURE,
 SENSOR_ACCEL,
 SENSOR_MAX_TYPES
};
# 97 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/sensors.h"
enum sensor_status {
 SENSOR_S_UNSPEC,
 SENSOR_S_OK,
 SENSOR_S_WARN,
 SENSOR_S_CRIT,
 SENSOR_S_UNKNOWN
};




struct sensor {
 char desc[32];
 struct timeval tv;
 int64_t value;
 enum sensor_type type;
 enum sensor_status status;
 int numt;
 int flags;


};




struct sensordev {
 int num;
 char xname[16];
 int maxnumt[SENSOR_MAX_TYPES];
 int sensors_count;
};




struct ksensor {
 struct { struct ksensor *sle_next; } list;
 char desc[32];
 struct timeval tv;
 int64_t value;
 enum sensor_type type;
 enum sensor_status status;
 int numt;
 int flags;
};
struct ksensors_head { struct ksensor *slh_first; };


struct ksensordev {
 struct { struct ksensordev *sle_next; } list;
 int num;
 char xname[16];
 int maxnumt[SENSOR_MAX_TYPES];
 int sensors_count;
 struct ksensors_head sensors_list;
};


void sensordev_install(struct ksensordev *);
void sensordev_deinstall(struct ksensordev *);
int sensordev_get(int, struct ksensordev **);


void sensor_attach(struct ksensordev *, struct ksensor *);
void sensor_detach(struct ksensordev *, struct ksensor *);
int sensor_find(int, enum sensor_type, int, struct ksensor **);


struct sensor_task;
struct sensor_task *sensor_task_register(void *, void (*)(void *),
        unsigned int);
void sensor_task_unregister(struct sensor_task *);
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2




struct vmxon_region {
        uint32_t vr_revision;
};




struct vmx {
 uint64_t vmx_cr0_fixed0;
 uint64_t vmx_cr0_fixed1;
 uint64_t vmx_cr4_fixed0;
 uint64_t vmx_cr4_fixed1;
 uint32_t vmx_vmxon_revision;
 uint32_t vmx_msr_table_size;
 uint32_t vmx_cr3_tgt_count;
 uint64_t vmx_vm_func;
};




struct svm {
};

union vmm_cpu_cap {
 struct vmx vcc_vmx;
 struct svm vcc_svm;
};

struct x86_64_tss;
struct cpu_info {
 struct device *ci_dev;
 struct cpu_info *ci_self;
 struct schedstate_percpu ci_schedstate;
 struct cpu_info *ci_next;

 struct proc *ci_curproc;
 u_int ci_cpuid;
 u_int ci_apicid;
 u_int ci_acpi_proc_id;
 u_int32_t ci_randseed;

 u_int64_t ci_scratch;

 struct proc *ci_fpcurproc;
 struct proc *ci_fpsaveproc;
 int ci_fpsaving;

 struct pcb *ci_curpcb;
 struct pcb *ci_idle_pcb;

 struct intrsource *ci_isources[64];
 u_int64_t ci_ipending;
 int ci_ilevel;
 int ci_idepth;
 int ci_handled_intr_level;
 u_int64_t ci_imask[16];
 u_int64_t ci_iunmask[16];

 int ci_mutex_level;


 volatile u_int ci_flags;
 u_int32_t ci_ipis;

 u_int32_t ci_feature_flags;
 u_int32_t ci_feature_eflags;
 u_int32_t ci_feature_sefflags_ebx;
 u_int32_t ci_feature_sefflags_ecx;
 u_int32_t ci_feature_tpmflags;
 u_int32_t ci_pnfeatset;
 u_int32_t ci_efeature_eax;
 u_int32_t ci_efeature_ecx;
 u_int32_t ci_brand[12];
 u_int32_t ci_amdcacheinfo[4];
 u_int32_t ci_extcacheinfo[4];
 u_int32_t ci_signature;
 u_int32_t ci_family;
 u_int32_t ci_model;
 u_int32_t ci_cflushsz;
 u_int64_t ci_tsc_freq;

 int ci_inatomic;


 u_int32_t ci_smt_id;
 u_int32_t ci_core_id;
 u_int32_t ci_pkg_id;

 struct cpu_functions *ci_func;
 void (*cpu_setup)(struct cpu_info *);
 void (*ci_info)(struct cpu_info *);

 struct device *ci_acpicpudev;
 volatile u_int ci_mwait;





 int ci_want_resched;

 struct x86_cache_info ci_cinfo[8];

 struct x86_64_tss *ci_tss;
 char *ci_gdt;

 volatile int ci_ddb_paused;
# 176 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
 struct ksensordev ci_sensordev;
 struct ksensor ci_sensor;



 u_int32_t ci_vmm_flags;





 union vmm_cpu_cap ci_vmm_cap;
 paddr_t ci_vmxon_region_pa;
 struct vmxon_region *ci_vmxon_region;
};
# 215 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
extern struct cpu_info cpu_info_primary;
extern struct cpu_info *cpu_info_list;
# 228 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
extern void need_resched(struct cpu_info *);
# 261 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
extern struct cpu_info cpu_info_primary;
# 281 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/psl.h" 1
# 77 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/psl.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 1
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/evcount.h" 1
# 35 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/evcount.h"
struct evcount {
 u_int64_t ec_count;
 int ec_id;
 const char *ec_name;
 void *ec_data;

 struct { struct evcount *tqe_next; struct evcount **tqe_prev; } next;
};

void evcount_attach(struct evcount *, const char *, void *);
void evcount_detach(struct evcount *);
int evcount_sysctl(int *, u_int, void *, size_t *, void *, size_t);
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 2
# 61 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
struct intrstub {
 void *ist_entry;
 void *ist_recurse;
 void *ist_resume;
};

struct intrsource {
 int is_maxlevel;
 int is_pin;
 struct intrhand *is_handlers;
 struct pic *is_pic;
 void *is_recurse;
 void *is_resume;
 char is_evname[32];
 int is_flags;
 int is_type;
 int is_idtvec;
 int is_minlevel;
};
# 91 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
struct intrhand {
 int (*ih_fun)(void *);
 void *ih_arg;
 int ih_level;
 int ih_flags;
 struct intrhand *ih_next;
 int ih_pin;
 int ih_slot;
 struct cpu_info *ih_cpu;
 int ih_irq;
 struct evcount ih_count;
};




extern void Xspllower(int);

int splraise(int);
int spllower(int);
void softintr(int);
# 162 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
void splassert_fail(int, int, const char *);
extern int splassert_ctl;
void splassert_check(int, const char *);
# 179 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pic.h" 1







# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mutex.h" 1
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mutex.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/mutex.h" 1
# 30 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/mutex.h"
struct mutex {
 int mtx_wantipl;
 int mtx_oldipl;
 volatile void *mtx_owner;
};
# 52 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/mutex.h"
void __mtx_init(struct mutex *, int);
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mutex.h" 2







void mtx_enter(struct mutex *);
void mtx_leave(struct mutex *);
int mtx_enter_try(struct mutex *);
# 9 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pic.h" 2

struct cpu_info;




struct pic {
 struct device pic_dev;
        int pic_type;



        void (*pic_hwmask)(struct pic *, int);
        void (*pic_hwunmask)(struct pic *, int);
 void (*pic_addroute)(struct pic *, struct cpu_info *, int, int, int);
 void (*pic_delroute)(struct pic *, struct cpu_info *, int, int, int);
 struct intrstub *pic_level_stubs;
 struct intrstub *pic_edge_stubs;
};
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/pic.h"
extern struct pic i8259_pic;
extern struct pic local_pic;
extern struct pic msi_pic;
extern struct pic softintr_pic;
# 180 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h" 2





extern void Xsoftclock(void);
extern void Xsoftnet(void);
extern void Xsofttty(void);

extern struct intrstub i8259_stubs[];
extern struct intrstub ioapic_edge_stubs[];
extern struct intrstub ioapic_level_stubs[];

struct cpu_info;

extern int intr_shared_edge;

extern char idt_allocmap[];

void intr_default_setup(void);
int x86_nmi(void);
void intr_calculatemasks(struct cpu_info *);
int intr_allocate_slot_cpu(struct cpu_info *, struct pic *, int, int *);
int intr_allocate_slot(struct pic *, int, int, int, struct cpu_info **, int *,
     int *);
void *intr_establish(int, struct pic *, int, int, int, int (*)(void *),
     void *, const char *);
void intr_disestablish(struct intrhand *);
int intr_handler(struct intrframe *, struct intrhand *);
void cpu_intr_init(struct cpu_info *);
int intr_find_mpmapping(int bus, int pin, int *handle);
void intr_printconfig(void);
void intr_barrier(void *);
# 238 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/intr.h"
struct x86_soft_intrhand {
 struct { struct x86_soft_intrhand *tqe_next; struct x86_soft_intrhand **tqe_prev; }
  sih_q;
 struct x86_soft_intr *sih_intrhead;
 void (*sih_fn)(void *);
 void *sih_arg;
 int sih_pending;
};

struct x86_soft_intr {
 struct { struct x86_soft_intrhand *tqh_first; struct x86_soft_intrhand **tqh_last; }
   softintr_q;
 int softintr_ssir;
 struct mutex softintr_lock;
};

void *softintr_establish(int, void (*)(void *), void *);
void softintr_disestablish(void *);
void softintr_init(void);
void softintr_dispatch(int);
# 78 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/psl.h" 2
# 282 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h" 2
# 311 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/cpu.h"
void signotify(struct proc *);




extern void (*delay_func)(int);
struct timeval;







extern int biosbasemem;
extern int biosextmem;
extern int cpu;
extern int cpu_feature;
extern int cpu_ebxfeature;
extern int cpu_ecxfeature;
extern int cpu_perf_eax;
extern int cpu_perf_ebx;
extern int cpu_perf_edx;
extern int cpu_apmi_edx;
extern int ecpu_ecxfeature;
extern int cpu_id;
extern char cpu_vendor[];
extern int cpuid_level;
extern int cpuspeed;


extern u_int cpu_mwait_size;
extern u_int cpu_mwait_states;


void identifycpu(struct cpu_info *);
int cpu_amd64speed(int *);


void dumpconf(void);
void cpu_reset(void);
void x86_64_proc0_tss_ldt_init(void);
void x86_64_bufinit(void);
void x86_64_init_pcb_tss_ldt(struct cpu_info *);
void cpu_proc_fork(struct proc *, struct proc *);
int amd64_pa_used(paddr_t);
extern void (*cpu_idle_enter_fcn)(void);
extern void (*cpu_idle_cycle_fcn)(void);
extern void (*cpu_idle_leave_fcn)(void);

struct region_descriptor;
void lgdt(struct region_descriptor *);

struct pcb;
void savectx(struct pcb *);
void switch_exit(struct proc *, void (*)(struct proc *));
void proc_trampoline(void);


extern void (*initclock_func)(void);
void startclocks(void);
void rtcstart(void);
void rtcstop(void);
void i8254_delay(int);
void i8254_initclocks(void);
void i8254_startclock(void);
void i8254_inittimecounter(void);
void i8254_inittimecounter_simple(void);


void i8259_default_setup(void);


void cpu_init_msrs(struct cpu_info *);



void dkcsumattach(void);


void x86_bus_space_init(void);
void x86_bus_space_mallocok(void);


void k8_powernow_init(struct cpu_info *);
void k8_powernow_setperf(int);


void k1x_init(struct cpu_info *);
void k1x_setperf(int);

void est_init(struct cpu_info *);
void est_setperf(int);
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/param.h" 2
# 89 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/param.h" 2
# 74 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 1
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/stdarg.h" 1
# 29 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 2
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
extern int securelevel;
extern const char *panicstr;
extern const char version[];
extern const char copyright[];
extern const char ostype[];
extern const char osversion[];
extern const char osrelease[];
extern int cold;

extern int ncpus;
extern int ncpusfound;
extern int nblkdev;
extern int nchrdev;

extern int selwait;
extern int maxmem;
extern int physmem;

extern dev_t dumpdev;
extern long dumplo;

extern dev_t rootdev;
extern u_char bootduid[8];
extern u_char rootduid[8];
extern struct vnode *rootvp;

extern dev_t swapdev;
extern struct vnode *swapdev_vp;

struct proc;
struct process;


typedef int sy_call_t(struct proc *, void *, register_t *);

extern struct sysent {
 short sy_narg;
 short sy_argsize;
 int sy_flags;
 sy_call_t *sy_call;
} sysent[];
# 131 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
extern int boothowto;

extern void (*v_putc)(int);




int nullop(void *);
int enodev(void);
int enosys(void);
int enoioctl(void);
int enxio(void);
int eopnotsupp(void *);

struct vnodeopv_desc;
void vfs_opv_init_explicit(struct vnodeopv_desc *);
void vfs_opv_init_default(struct vnodeopv_desc *);
void vfs_op_init(void);

int seltrue(dev_t dev, int which, struct proc *);
int selfalse(dev_t dev, int which, struct proc *);
void *hashinit(int, int, int, u_long *);
void hashfree(void *, int, int);
int sys_nosys(struct proc *, void *, register_t *);

void panic(const char *, ...)
    __attribute__((__noreturn__,__format__(__kprintf__,1,2)));
void __assert(const char *, const char *, int, const char *)
    __attribute__((__noreturn__));
int printf(const char *, ...)
    __attribute__((__format__(__kprintf__,1,2)));
void uprintf(const char *, ...)
    __attribute__((__format__(__kprintf__,1,2)));
int vprintf(const char *, va_list)
    __attribute__((__format__(__kprintf__,1,0)));
int vsnprintf(char *, size_t, const char *, va_list)
    __attribute__((__format__(__kprintf__,3,0)));
int snprintf(char *buf, size_t, const char *, ...)
    __attribute__((__format__(__kprintf__,3,4)));
struct tty;
void ttyprintf(struct tty *, const char *, ...)
    __attribute__((__format__(__kprintf__,2,3)));

void splassert_fail(int, int, const char *);
extern int splassert_ctl;

void assertwaitok(void);

void tablefull(const char *);

int kcopy(const void *, void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));

void bcopy(const void *, void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));
void bzero(void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,2)));
void explicit_bzero(void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,2)));
int bcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));
void *memmove(void *, const void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)))
  __attribute__ ((__bounded__(__buffer__,2,3)));
void *memset(void *, int, size_t)
  __attribute__ ((__bounded__(__buffer__,1,3)));

int copystr(const void *, void *, size_t, size_t *)
  __attribute__ ((__bounded__(__string__,2,3)));
int copyinstr(const void *, void *, size_t, size_t *)
  __attribute__ ((__bounded__(__string__,2,3)));
int copyoutstr(const void *, void *, size_t, size_t *);
int copyin(const void *, void *, size_t)
  __attribute__ ((__bounded__(__buffer__,2,3)));
int copyout(const void *, void *, size_t);

void arc4random_buf(void *, size_t)
  __attribute__ ((__bounded__(__buffer__,1,2)));
u_int32_t arc4random(void);
u_int32_t arc4random_uniform(u_int32_t);

struct timeval;
struct timespec;
int tvtohz(const struct timeval *);
int tstohz(const struct timespec *);
void realitexpire(void *);

struct intrframe;
void hardclock(struct intrframe *);
void softclock(void *);
void statclock(struct intrframe *);

void initclocks(void);
void inittodr(time_t);
void resettodr(void);
void cpu_initclocks(void);

void startprofclock(struct process *);
void stopprofclock(struct process *);
void setstatclockrate(int);

void start_periodic_resettodr(void);
void stop_periodic_resettodr(void);

struct sleep_state;
void sleep_setup(struct sleep_state *, const volatile void *, int,
     const char *);
void sleep_setup_timeout(struct sleep_state *, int);
void sleep_setup_signal(struct sleep_state *, int);
void sleep_finish(struct sleep_state *, int);
int sleep_finish_timeout(struct sleep_state *);
int sleep_finish_signal(struct sleep_state *);
void sleep_queue_init(void);

struct mutex;
struct rwlock;
void wakeup_n(const volatile void *, int);
void wakeup(const volatile void *);

int tsleep(const volatile void *, int, const char *, int);
int msleep(const volatile void *, struct mutex *, int, const char*, int);
int rwsleep(const volatile void *, struct rwlock *, int, const char *, int);
void yield(void);

void wdog_register(int (*)(void *, int), void *);
void wdog_shutdown(void *);






struct hook_desc {
 struct { struct hook_desc *tqe_next; struct hook_desc **tqe_prev; } hd_list;
 void (*hd_fn)(void *);
 void *hd_arg;
};
struct hook_desc_head { struct hook_desc *tqh_first; struct hook_desc **tqh_last; };

extern struct hook_desc_head startuphook_list;

void *hook_establish(struct hook_desc_head *, int, void (*)(void *), void *);
void hook_disestablish(struct hook_desc_head *, void *);
void dohooks(struct hook_desc_head *, int);
# 289 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
struct uio;
int uiomove(void *, size_t, struct uio *);



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/rwlock.h" 1
# 57 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/rwlock.h"
struct proc;

struct rwlock {
 volatile unsigned long rwl_owner;
 const char *rwl_name;
};
# 93 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/rwlock.h"
struct rrwlock {
 struct rwlock rrwl_lock;
 uint32_t rrwl_wcnt;
};



void rw_init(struct rwlock *, const char *);

void rw_enter_read(struct rwlock *);
void rw_enter_write(struct rwlock *);
void rw_exit_read(struct rwlock *);
void rw_exit_write(struct rwlock *);


void rw_assert_wrlock(struct rwlock *);
void rw_assert_rdlock(struct rwlock *);
void rw_assert_unlocked(struct rwlock *);






int rw_enter(struct rwlock *, int);
void rw_exit(struct rwlock *);
int rw_status(struct rwlock *);

void rrw_init(struct rrwlock *, char *);
int rrw_enter(struct rrwlock *, int);
void rrw_exit(struct rrwlock *);
int rrw_status(struct rrwlock *);
# 295 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 2

extern struct rwlock netlock;
# 317 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h"
__attribute__((returns_twice)) int setjmp(label_t *);
__attribute__((__noreturn__)) void longjmp(label_t *);


void consinit(void);

void cpu_startup(void);
void cpu_configure(void);
void diskconf(void);

int nfs_mountroot(void);
int dk_mountroot(void);
extern int (*mountroot)(void);

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/lib/libkern/libkern.h" 1
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/lib/libkern/libkern.h"
static __inline int imax(int, int);
static __inline int imin(int, int);
static __inline u_int max(u_int, u_int);
static __inline u_int min(u_int, u_int);
static __inline long lmax(long, long);
static __inline long lmin(long, long);
static __inline u_long ulmax(u_long, u_long);
static __inline u_long ulmin(u_long, u_long);
static __inline int abs(int);


static __inline int
imax(int a, int b)
{
 return (a > b ? a : b);
}
static __inline int
imin(int a, int b)
{
 return (a < b ? a : b);
}
static __inline long
lmax(long a, long b)
{
 return (a > b ? a : b);
}
static __inline long
lmin(long a, long b)
{
 return (a < b ? a : b);
}
static __inline u_int
max(u_int a, u_int b)
{
 return (a > b ? a : b);
}
static __inline u_int
min(u_int a, u_int b)
{
 return (a < b ? a : b);
}
static __inline u_long
ulmax(u_long a, u_long b)
{
 return (a > b ? a : b);
}
static __inline u_long
ulmin(u_long a, u_long b)
{
 return (a < b ? a : b);
}

static __inline int
abs(int j)
{
 return(j < 0 ? -j : j);
}
# 161 "/crypt/home/bluhm/openbsd/cvs/src/sys/lib/libkern/libkern.h"
void __assert(const char *, const char *, int, const char *)
     __attribute__ ((__noreturn__));
int bcmp(const void *, const void *, size_t);
void bzero(void *, size_t);
void explicit_bzero(void *, size_t);
int ffs(int);
int fls(int);
int flsl(long);
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memset(void *, int c, size_t len);
u_int32_t random(void);
int scanc(u_int, const u_char *, const u_char [], int);
int skpc(int, size_t, u_char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t)
  __attribute__ ((__bounded__(__string__,1,3)));
size_t strnlen(const char *, size_t);
size_t strlcpy(char *, const char *, size_t)
  __attribute__ ((__bounded__(__string__,1,3)));
size_t strlcat(char *, const char *, size_t)
  __attribute__ ((__bounded__(__string__,1,3)));
int strcmp(const char *, const char *);
int strncmp(const char *, const char *, size_t);
int strncasecmp(const char *, const char *, size_t);
int getsn(char *, int);
char *strchr(const char *, int);
char *strrchr(const char *, int);
int timingsafe_bcmp(const void *, const void *, size_t);
# 332 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/systm.h" 2



void Debugger(void);



void user_config(void);
# 75 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
typedef __socklen_t socklen_t;




typedef __sa_family_t sa_family_t;
# 119 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};
# 137 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct splice {
 int sp_fd;
 off_t sp_max;
 struct timeval sp_idle;
};
# 206 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct sockaddr {
 __uint8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 224 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct sockaddr_storage {
 __uint8_t ss_len;
 sa_family_t ss_family;
 unsigned char __ss_pad1[6];
 __uint64_t __ss_pad2;
 unsigned char __ss_pad3[240];
};






struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 297 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct sockpeercred {
 uid_t uid;
 gid_t gid;
 pid_t pid;
};
# 427 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 unsigned int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 456 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 535 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socket.h"
void pfctlinput(int, struct sockaddr *);
# 76 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h" 1
# 69 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
};
# 82 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 u_int mh_len;
 short mh_type;
 u_short mh_flags;
};


struct pf_state_key;
struct inpcb;

struct pkthdr_pf {
 struct pf_state_key *statekey;
 struct inpcb *inp;
 u_int32_t qid;
 u_int16_t tag;
 u_int8_t flags;
 u_int8_t routed;
 u_int8_t prio;
 u_int8_t pad[3];
};
# 122 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct pkthdr {
 void *ph_cookie;
 struct { struct m_tag *slh_first; } ph_tags;
 int len;
 u_int16_t ph_tagsset;
 u_int16_t ph_flowid;
 u_int16_t csum_flags;
 u_int16_t ether_vtag;
 u_int ph_rtableid;
 u_int ph_ifidx;
 u_int8_t ph_loopcnt;
 struct pkthdr_pf pf;
};


struct mbuf_ext {
 caddr_t ext_buf;
 void *ext_arg;
 u_int ext_free_fn;
 u_int ext_size;
 struct mbuf *ext_nextref;
 struct mbuf *ext_prevref;






};

struct mbuf {
 struct m_hdr m_hdr;
 union {
  struct {
   struct pkthdr MH_pkthdr;
   union {
    struct mbuf_ext MH_ext;
    char MH_databuf[((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))];
   } MH_dat;
  } MH;
  char M_databuf[(256 - sizeof(struct m_hdr))];
 } M_dat;
};
# 245 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/malloc.h" 1
# 319 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/malloc.h"
struct kmemstats {
 long ks_inuse;
 long ks_calls;
 long ks_memuse;
 u_short ks_limblocks;
 u_short ks_mapblocks;
 long ks_maxused;
 long ks_limit;
 long ks_size;
 long ks_spare;
};




struct kmemusage {
 short ku_indx;
 union {
  u_short freecnt;
  u_short pagecnt;
 } ku_un;
};



struct kmem_freelist;




struct kmembuckets {
 struct { struct kmem_freelist *sqx_first; struct kmem_freelist **sqx_last; unsigned long sqx_cookie; } kb_freelist;
 u_int64_t kb_calls;
 u_int64_t kb_total;
 u_int64_t kb_totalfree;
 u_int64_t kb_elmpercl;
 u_int64_t kb_highwat;
 u_int64_t kb_couldfree;
};
# 388 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/malloc.h"
extern struct kmemstats kmemstats[];
extern struct kmemusage *kmemusage;
extern char *kmembase;
extern struct kmembuckets bucket[];

void *malloc(size_t, int, int);
void *mallocarray(size_t, size_t, int, int);
void free(void *, int, size_t);
int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);

size_t malloc_roundup(size_t);
void malloc_printit(int (*)(const char *, ...));

void poison_mem(void *, size_t);
int poison_check(void *, size_t, size_t *, uint32_t *);
uint32_t poison_value(void *);
# 246 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h" 2
# 312 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
u_int mextfree_register(void (*)(caddr_t, u_int, void *));
# 389 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct mbstat {
 u_long m_drops;
 u_long m_wait;
 u_long m_drain;
 u_short m_mtypes[256];
};
# 404 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
struct mbuf_list {
 struct mbuf *ml_head;
 struct mbuf *ml_tail;
 u_int ml_len;
};

struct mbuf_queue {
 struct mutex mq_mtx;
 struct mbuf_list mq_list;
 u_int mq_maxlen;
 u_int mq_drops;
};



extern int nmbclust;
extern int mblowat;
extern int mcllowat;
extern int max_linkhdr;
extern int max_protohdr;
extern int max_hdr;

void mbinit(void);
void mbcpuinit(void);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_free(struct mbuf *);
struct mbuf *m_get(int, int);
struct mbuf *m_getclr(int, int);
struct mbuf *m_gethdr(int, int);
struct mbuf *m_inithdr(struct mbuf *);
void m_resethdr(struct mbuf *);
int m_defrag(struct mbuf *, int);
struct mbuf *m_prepend(struct mbuf *, int, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_makespace(struct mbuf *, int, int, int *);
struct mbuf *m_getptr(struct mbuf *, int, int *);
int m_leadingspace(struct mbuf *);
int m_trailingspace(struct mbuf *);
struct mbuf *m_clget(struct mbuf *, int, u_int);
void m_extref(struct mbuf *, struct mbuf *);
void m_extfree_pool(caddr_t, u_int, void *);
void m_adj(struct mbuf *, int);
int m_copyback(struct mbuf *, int, int, const void *, int);
struct mbuf *m_freem(struct mbuf *);
void m_purge(struct mbuf *);
void m_reclaim(void *, int);
void m_copydata(struct mbuf *, int, int, caddr_t);
void m_cat(struct mbuf *, struct mbuf *);
struct mbuf *m_devget(char *, int, int);
int m_apply(struct mbuf *, int, int,
     int (*)(caddr_t, caddr_t, unsigned int), caddr_t);
struct mbuf *m_dup_pkt(struct mbuf *, unsigned int, int);
int m_dup_pkthdr(struct mbuf *, struct mbuf *, int);


struct m_tag *m_tag_get(int, int, int);
void m_tag_prepend(struct mbuf *, struct m_tag *);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *);
struct m_tag *m_tag_find(struct mbuf *, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *, int);
int m_tag_copy_chain(struct mbuf *, struct mbuf *, int);
void m_tag_init(struct mbuf *);
struct m_tag *m_tag_first(struct mbuf *);
struct m_tag *m_tag_next(struct mbuf *, struct m_tag *);
# 505 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
void ml_init(struct mbuf_list *);
void ml_enqueue(struct mbuf_list *, struct mbuf *);
struct mbuf * ml_dequeue(struct mbuf_list *);
void ml_enlist(struct mbuf_list *, struct mbuf_list *);
struct mbuf * ml_dechain(struct mbuf_list *);
unsigned int ml_purge(struct mbuf_list *);
# 530 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/mbuf.h"
void mq_init(struct mbuf_queue *, u_int, int);
int mq_enqueue(struct mbuf_queue *, struct mbuf *);
struct mbuf * mq_dequeue(struct mbuf_queue *);
int mq_enlist(struct mbuf_queue *, struct mbuf_list *);
void mq_delist(struct mbuf_queue *, struct mbuf_list *);
struct mbuf * mq_dechain(struct mbuf_queue *);
unsigned int mq_purge(struct mbuf_queue *);
# 77 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/proc.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/proc.h"
struct trapframe;
struct mdproc {
 struct trapframe *md_regs;
 int md_flags;
 volatile int md_astpending;
};
# 44 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/selinfo.h" 1
# 37 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/selinfo.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h" 1
# 53 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
struct kevent {
 __uintptr_t ident;
 short filter;
 u_short flags;
 u_int fflags;
 __int64_t data;
 void *udata;
};
# 116 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
# 134 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};

struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
 int kn_sfflags;
 __int64_t kn_sdata;
 union {
  struct file *p_fp;
  struct process *p_process;
 } kn_ptr;
 const struct filterops *kn_fop;
 void *kn_hook;
# 167 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/event.h"
};

struct proc;

extern void knote(struct klist *list, long hint);
extern void knote_activate(struct knote *);
extern void knote_remove(struct proc *p, struct klist *list);
extern void knote_fdclose(struct proc *p, int fd);
extern void knote_processexit(struct proc *);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct proc *p);
extern int filt_seltrue(struct knote *kn, long hint);
extern int seltrue_kqfilter(dev_t, struct knote *);
extern void klist_invalidate(struct klist *);
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/selinfo.h" 2





struct selinfo {
 pid_t si_seltid;
 struct klist si_note;
 short si_flags;
};



struct proc;

void selrecord(struct proc *selector, struct selinfo *);
void selwakeup(struct selinfo *);
# 45 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/syslimits.h" 1
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/timeout.h" 1
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/timeout.h"
struct circq {
 struct circq *next;
 struct circq *prev;
};

struct timeout {
 struct circq to_list;
 void (*to_func)(void *);
 void *to_arg;
 int to_time;
 int to_flags;
};
# 89 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/timeout.h"
struct bintime;

void timeout_set(struct timeout *, void (*)(void *), void *);
void timeout_set_proc(struct timeout *, void (*)(void *), void *);
int timeout_add(struct timeout *, int);
int timeout_add_tv(struct timeout *, const struct timeval *);
int timeout_add_ts(struct timeout *, const struct timespec *);
int timeout_add_bt(struct timeout *, const struct bintime *);
int timeout_add_sec(struct timeout *, int);
int timeout_add_msec(struct timeout *, int);
int timeout_add_usec(struct timeout *, int);
int timeout_add_nsec(struct timeout *, int);
int timeout_del(struct timeout *);

void timeout_startup(void);
void timeout_adjust_ticks(int);





int timeout_hardclock_update(void);
# 48 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h" 2



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/atomic.h" 1
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/atomic.h"
static inline unsigned int
_atomic_cas_uint(volatile unsigned int *p, unsigned int e, unsigned int n)
{
 __asm volatile( " cmpxchgl %2, %1"
     : "=a" (n), "=m" (*p)
     : "r" (n), "a" (e), "m" (*p));

 return (n);
}


static inline unsigned long
_atomic_cas_ulong(volatile unsigned long *p, unsigned long e, unsigned long n)
{
 __asm volatile( " cmpxchgq %2, %1"
     : "=a" (n), "=m" (*p)
     : "r" (n), "a" (e), "m" (*p));

 return (n);
}


static inline void *
_atomic_cas_ptr(volatile void *p, void *e, void *n)
{
 __asm volatile( " cmpxchgq %2, %1"
     : "=a" (n), "=m" (*(unsigned long *)p)
     : "r" (n), "a" (e), "m" (*(unsigned long *)p));

 return (n);
}


static inline unsigned int
_atomic_swap_uint(volatile unsigned int *p, unsigned int n)
{
 __asm volatile("xchgl %0, %1"
     : "=a" (n), "=m" (*p)
     : "0" (n), "m" (*p));

 return (n);
}



static inline unsigned long
_atomic_swap_ulong(volatile unsigned long *p, unsigned long n)
{
 __asm volatile("xchgq %0, %1"
     : "=a" (n), "=m" (*p)
     : "0" (n), "m" (*p));

 return (n);
}


static inline uint64_t
_atomic_swap_64(volatile uint64_t *p, uint64_t n)
{
 __asm volatile("xchgq %0, %1"
     : "=a" (n), "=m" (*p)
     : "0" (n), "m" (*p));

 return (n);
}


static inline void *
_atomic_swap_ptr(volatile void *p, void *n)
{
 __asm volatile("xchgq %0, %1"
     : "=a" (n), "=m" (*(unsigned long *)p)
     : "0" (n), "m" (*(unsigned long *)p));

 return (n);
}


static inline void
_atomic_inc_int(volatile unsigned int *p)
{
 __asm volatile( " incl %0"
     : "+m" (*p));
}


static inline void
_atomic_inc_long(volatile unsigned long *p)
{
 __asm volatile( " incq %0"
     : "+m" (*p));
}


static inline void
_atomic_dec_int(volatile unsigned int *p)
{
 __asm volatile( " decl %0"
     : "+m" (*p));
}


static inline void
_atomic_dec_long(volatile unsigned long *p)
{
 __asm volatile( " decq %0"
     : "+m" (*p));
}


static inline void
_atomic_add_int(volatile unsigned int *p, unsigned int v)
{
 __asm volatile( " addl %1,%0"
     : "+m" (*p)
     : "a" (v));
}


static inline void
_atomic_add_long(volatile unsigned long *p, unsigned long v)
{
 __asm volatile( " addq %1,%0"
     : "+m" (*p)
     : "a" (v));
}


static inline void
_atomic_sub_int(volatile unsigned int *p, unsigned int v)
{
 __asm volatile( " subl %1,%0"
     : "+m" (*p)
     : "a" (v));
}


static inline void
_atomic_sub_long(volatile unsigned long *p, unsigned long v)
{
 __asm volatile( " subq %1,%0"
     : "+m" (*p)
     : "a" (v));
}



static inline unsigned long
_atomic_add_int_nv(volatile unsigned int *p, unsigned int v)
{
 unsigned int rv = v;

 __asm volatile( " xaddl %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv + v);
}


static inline unsigned long
_atomic_add_long_nv(volatile unsigned long *p, unsigned long v)
{
 unsigned long rv = v;

 __asm volatile( " xaddq %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv + v);
}


static inline unsigned long
_atomic_sub_int_nv(volatile unsigned int *p, unsigned int v)
{
 unsigned int rv = 0 - v;

 __asm volatile( " xaddl %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv - v);
}


static inline unsigned long
_atomic_sub_long_nv(volatile unsigned long *p, unsigned long v)
{
 unsigned long rv = 0 - v;

 __asm volatile( " xaddq %0,%1"
     : "+a" (rv), "+m" (*p));

 return (rv - v);
}
# 284 "/crypt/home/bluhm/openbsd/cvs/src/sys/arch/amd64/compile/GENERIC/obj/machine/atomic.h"
static __inline void
x86_atomic_setbits_u32(volatile u_int32_t *ptr, u_int32_t bits)
{
 __asm volatile( " orl %1,%0" : "=m" (*ptr) : "ir" (bits));
}

static __inline void
x86_atomic_clearbits_u32(volatile u_int32_t *ptr, u_int32_t bits)
{
 __asm volatile( " andl %1,%0" : "=m" (*ptr) : "ir" (~bits));
}

static __inline void
x86_atomic_setbits_u64(volatile u_int64_t *ptr, u_int64_t bits)
{
 __asm volatile( " orq %1,%0" : "=m" (*ptr) : "er" (bits));
}

static __inline void
x86_atomic_clearbits_u64(volatile u_int64_t *ptr, u_int64_t bits)
{
 __asm volatile( " andq %1,%0" : "=m" (*ptr) : "er" (~bits));
}
# 52 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h" 2
# 60 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
struct process;
struct session {
 int s_count;
 struct process *s_leader;
 struct vnode *s_ttyvp;
 struct tty *s_ttyp;
 char s_login[32];
 pid_t s_verauthppid;
 uid_t s_verauthuid;
 struct timeout s_verauthto;
};

void zapverauth( void *);




struct pgrp {
 struct { struct pgrp *le_next; struct pgrp **le_prev; } pg_hash;
 struct { struct process *lh_first; } pg_members;
 struct session *pg_session;
 pid_t pg_id;
 int pg_jobc;
};




struct exec_package;
struct proc;
struct ps_strings;
struct uvm_object;
struct whitepaths;
union sigval;

struct emul {
 char e_name[8];
 int *e_errno;

 void (*e_sendsig)(void (*)(int), int, int, u_long, int, union sigval);
 int e_nosys;
 int e_nsysent;
 struct sysent *e_sysent;
 char **e_syscallnames;
 int e_arglen;

 void *(*e_copyargs)(struct exec_package *, struct ps_strings *,
        void *, void *);

 void (*e_setregs)(struct proc *, struct exec_package *,
      u_long, register_t *);
 int (*e_fixup)(struct proc *, struct exec_package *);
 int (*e_coredump)(struct proc *, void *cookie);
 char *e_sigcode;
 char *e_esigcode;
 char *e_esigret;
 int e_flags;
 struct uvm_object *e_sigobject;

 void (*e_proc_exec)(struct proc *, struct exec_package *);
 void (*e_proc_fork)(struct proc *p, struct proc *parent);
 void (*e_proc_exit)(struct proc *);
};
# 132 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
struct tusage {
 struct timespec tu_runtime;
 uint64_t tu_uticks;
 uint64_t tu_sticks;
 uint64_t tu_iticks;
};
# 152 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
struct process {
# 161 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
 struct proc *ps_mainproc;
 struct ucred *ps_ucred;

 struct { struct process *le_next; struct process **le_prev; } ps_list;
 struct { struct proc *tqh_first; struct proc **tqh_last; } ps_threads;

 struct { struct process *le_next; struct process **le_prev; } ps_pglist;
 struct process *ps_pptr;
 struct { struct process *le_next; struct process **le_prev; } ps_sibling;
 struct { struct process *lh_first; } ps_children;
 struct { struct process *le_next; struct process **le_prev; } ps_hash;

 struct sigacts *ps_sigacts;
 struct vnode *ps_textvp;
 struct filedesc *ps_fd;
 struct vmspace *ps_vmspace;
 pid_t ps_pid;



 struct klist ps_klist;
 int ps_flags;

 struct proc *ps_single;
 int ps_singlecount;

 int ps_traceflag;
 struct vnode *ps_tracevp;
 struct ucred *ps_tracecred;

 pid_t ps_oppid;
 int ps_ptmask;
 struct ptrace_state *ps_ptstat;

 struct rusage *ps_ru;
 struct tusage ps_tu;
 struct rusage ps_cru;
 struct itimerval ps_timer[3];

 u_int64_t ps_wxcounter;






 struct plimit *ps_limit;
 struct pgrp *ps_pgrp;
 struct emul *ps_emul;
 vaddr_t ps_strings;
 vaddr_t ps_stackgap;
 vaddr_t ps_sigcode;
 vaddr_t ps_sigcoderet;
 u_long ps_sigcookie;
 u_int ps_rtableid;
 char ps_nice;

 struct uprof {
  caddr_t pr_base;
  size_t pr_size;
  u_long pr_off;
  u_int pr_scale;
 } ps_prof;

 u_short ps_acflag;

 uint64_t ps_pledge;
 struct whitepaths *ps_pledgepaths;

 int64_t ps_kbind_cookie;
 u_long ps_kbind_addr;



 int ps_refcnt;

 struct timespec ps_start;
 struct timeout ps_realit_to;
};
# 280 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
struct proc {
 struct { struct proc *tqe_next; struct proc **tqe_prev; } p_runq;
 struct { struct proc *le_next; struct proc **le_prev; } p_list;

 struct process *p_p;
 struct { struct proc *tqe_next; struct proc **tqe_prev; } p_thr_link;


 struct filedesc *p_fd;
 struct vmspace *p_vmspace;


 int p_flag;
 u_char p_spare;
 char p_stat;
 char p_pad1[1];
 u_char p_descfd;

 pid_t p_tid;
 struct { struct proc *le_next; struct proc **le_prev; } p_hash;



 int p_dupfd;

 long p_thrslpid;


 u_int p_estcpu;
 int p_cpticks;
 const volatile void *p_wchan;
 struct timeout p_sleep_to;
 const char *p_wmesg;
 fixpt_t p_pctcpu;
 u_int p_slptime;
 u_int p_uticks;
 u_int p_sticks;
 u_int p_iticks;
 struct cpu_info * volatile p_cpu;

 struct rusage p_ru;
 struct tusage p_tu;
 struct timespec p_rtime;

 void *p_emuldata;

 int p_siglist;






 sigset_t p_sigmask;

 u_char p_priority;
 u_char p_usrpri;
 char p_comm[16 +1];

 int p_pledge_syscall;







 struct ucred *p_ucred;
 struct sigaltstack p_sigstk;

 u_long p_prof_addr;
 u_long p_prof_ticks;



 struct user *p_addr;
 struct mdproc p_md;

 sigset_t p_oldmask;
 int p_sisig;
 union sigval p_sigval;
 long p_sitrapno;
 int p_sicode;

 u_short p_xstat;
};
# 411 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
struct uidinfo {
 struct { struct uidinfo *le_next; struct uidinfo **le_prev; } ui_hash;
 uid_t ui_uid;
 long ui_proccnt;
 long ui_lockcnt;
};

struct uidinfo *uid_find(uid_t);
# 465 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
extern struct tidhashhead { struct proc *lh_first; } *tidhashtbl;
extern u_long tidhash;


extern struct pidhashhead { struct process *lh_first; } *pidhashtbl;
extern u_long pidhash;


extern struct pgrphashhead { struct pgrp *lh_first; } *pgrphashtbl;
extern u_long pgrphash;

extern struct proc proc0;
extern struct process process0;
extern int nprocesses, maxprocess;
extern int nthreads, maxthread;
extern int randompid;

struct proclist { struct proc *lh_first; };
struct processlist { struct process *lh_first; };
extern struct processlist allprocess;
extern struct processlist zombprocess;
extern struct proclist allproc;

extern struct process *initprocess;
extern struct proc *reaperproc;
extern struct proc *syncerproc;

extern struct pool process_pool;
extern struct pool proc_pool;
extern struct pool rusage_pool;
extern struct pool ucred_pool;
extern struct pool session_pool;
extern struct pool pgrp_pool;

void freepid(pid_t);

struct process *prfind(pid_t);
struct process *zombiefind(pid_t);
struct proc *pfind(pid_t);
struct pgrp *pgfind(pid_t);
void proc_printit(struct proc *p, const char *modif,
    int (*pr)(const char *, ...));

int chgproccnt(uid_t uid, int diff);
int enterpgrp(struct process *, pid_t, struct pgrp *, struct session *);
void fixjobc(struct process *, struct pgrp *, int);
int inferior(struct process *, struct process *);
void leavepgrp(struct process *);
void preempt(struct proc *);
void pgdelete(struct pgrp *);
void procinit(void);
void resetpriority(struct proc *);
void setrunnable(struct proc *);
void endtsleep(void *);
void unsleep(struct proc *);
void reaper(void);
void exit1(struct proc *, int, int);
void exit2(struct proc *);
int dowait4(struct proc *, pid_t, int *, int, struct rusage *,
     register_t *);
void cpu_exit(struct proc *);
void process_initialize(struct process *, struct proc *);
int fork1(struct proc *, int, void *, pid_t *, void (*)(void *),
     void *, register_t *, struct proc **);
int groupmember(gid_t, struct ucred *);
void dorefreshcreds(struct process *, struct proc *);
void dosigsuspend(struct proc *, sigset_t);

static inline void
refreshcreds(struct proc *p)
{
 struct process *pr = p->p_p;


 if (pr->ps_ucred != p->p_ucred)
  dorefreshcreds(pr, p);
}

enum single_thread_mode {
 SINGLE_SUSPEND,
 SINGLE_PTRACE,
 SINGLE_UNWIND,
 SINGLE_EXIT
};
int single_thread_set(struct proc *, enum single_thread_mode, int);
void single_thread_wait(struct process *);
void single_thread_clear(struct proc *, int);
int single_thread_check(struct proc *, int);

void child_return(void *);

int proc_cansugid(struct proc *);

struct sleep_state {
 int sls_s;
 int sls_catch;
 int sls_do_sleep;
 int sls_sig;
};
# 577 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/proc.h"
struct cpuset {
 int cs_set[(((1) - 1)/32 + 1)];
};

void cpuset_init_cpu(struct cpu_info *);

void cpuset_clear(struct cpuset *);
void cpuset_add(struct cpuset *, struct cpu_info *);
void cpuset_del(struct cpuset *, struct cpu_info *);
int cpuset_isset(struct cpuset *, struct cpu_info *);
void cpuset_add_all(struct cpuset *);
void cpuset_copy(struct cpuset *, struct cpuset *);
void cpuset_union(struct cpuset *, struct cpuset *, struct cpuset *);
void cpuset_intersection(struct cpuset *t, struct cpuset *, struct cpuset *);
void cpuset_complement(struct cpuset *, struct cpuset *, struct cpuset *);
struct cpu_info *cpuset_first(struct cpuset *);
# 78 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct m_tag;






# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/tree.h" 1
# 767 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/tree.h"
struct rb_type {
 int (*t_compare)(const void *, const void *);
 void (*t_augment)(void *);
 unsigned int t_offset;
};

struct rb_tree {
 struct rb_entry *rbt_root;
};

struct rb_entry {
 struct rb_entry *rbt_parent;
 struct rb_entry *rbt_left;
 struct rb_entry *rbt_right;
 unsigned int rbt_color;
};
# 793 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/tree.h"
static inline void
_rb_init(struct rb_tree *rbt)
{
 rbt->rbt_root = ((void *)0);
}

static inline int
_rb_empty(struct rb_tree *rbt)
{
 return (rbt->rbt_root == ((void *)0));
}

void *_rb_insert(const struct rb_type *, struct rb_tree *, void *);
void *_rb_remove(const struct rb_type *, struct rb_tree *, void *);
void *_rb_find(const struct rb_type *, struct rb_tree *, const void *);
void *_rb_nfind(const struct rb_type *, struct rb_tree *, const void *);
void *_rb_root(const struct rb_type *, struct rb_tree *);
void *_rb_min(const struct rb_type *, struct rb_tree *);
void *_rb_max(const struct rb_type *, struct rb_tree *);
void *_rb_next(const struct rb_type *, void *);
void *_rb_prev(const struct rb_type *, void *);
void *_rb_left(const struct rb_type *, void *);
void *_rb_right(const struct rb_type *, void *);
void *_rb_parent(const struct rb_type *, void *);
void *_rb_color(const struct rb_type *, void *);
void _rb_poison(const struct rb_type *, void *, unsigned long);
int _rb_check(const struct rb_type *, void *, unsigned long);
# 51 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h" 1
# 159 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct in_addr {
 in_addr_t s_addr;
};
# 250 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct sockaddr_in {
 u_int8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 int8_t sin_zero[8];
};
# 265 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct ip_opts {
 struct in_addr ip_dst;



 int8_t ip_opts[40];

};
# 356 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};
# 782 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h" 1
# 81 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
struct in6_addr {
 union {
  u_int8_t __u6_addr8[16];
  u_int16_t __u6_addr16[8];
  u_int32_t __u6_addr32[4];
 } __u6_addr;
};
# 106 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
struct sockaddr_in6 {
 u_int8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 u_int32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 u_int32_t sin6_scope_id;
};
# 130 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
extern const struct sockaddr_in6 sa6_any;

extern const struct in6_addr in6mask0;
extern const struct in6_addr in6mask32;
extern const struct in6_addr in6mask64;
extern const struct in6_addr in6mask96;
extern const struct in6_addr in6mask128;



extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
extern const struct in6_addr in6addr_intfacelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;





struct route_in6 {
 struct rtentry *ro_rt;
 u_long ro_tableid;
 struct sockaddr_in6 ro_dst;
};
# 366 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};






struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 u_int32_t ip6m_mtu;
};
# 407 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"
extern u_char inet6ctlerrmap[];
extern struct niqueue ip6intrq;
extern struct in6_addr zeroin6_addr;

struct mbuf;
struct ifnet;
struct cmsghdr;

int in6_cksum(struct mbuf *, u_int8_t, u_int32_t, u_int32_t);
void in6_proto_cksum_out(struct mbuf *, struct ifnet *);
int in6_localaddr(struct in6_addr *);
int in6_addrscope(struct in6_addr *);
struct in6_ifaddr *in6_ifawithscope(struct ifnet *, struct in6_addr *, u_int);
void in6_get_rand_ifid(struct ifnet *, struct in6_addr *);
int in6_mask2len(struct in6_addr *, u_char *);

struct inpcb;

int in6_embedscope(struct in6_addr *, const struct sockaddr_in6 *,
     struct inpcb *);
void in6_recoverscope(struct sockaddr_in6 *, const struct in6_addr *);
void in6_clearscope(struct in6_addr *);

struct sockaddr;
struct sockaddr_in6;
struct ifaddr;
struct in6_ifaddr;







static __inline struct sockaddr_in6 *
satosin6(struct sockaddr *sa)
{
 return ((struct sockaddr_in6 *)(sa));
}

static __inline struct sockaddr *
sin6tosa(struct sockaddr_in6 *sin6)
{
 return ((struct sockaddr *)(sin6));
}

static __inline struct in6_ifaddr *
ifatoia6(struct ifaddr *ifa)
{
 return ((struct in6_ifaddr *)(ifa));
}
# 713 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/in6.h"

struct cmsghdr;

extern int inet6_opt_init(void *, socklen_t);
extern int inet6_opt_append(void *, socklen_t, int, u_int8_t,
  socklen_t, u_int8_t, void **);
extern int inet6_opt_finish(void *, socklen_t, int);
extern int inet6_opt_set_val(void *, int, void *, socklen_t);

extern int inet6_opt_next(void *, socklen_t, int, u_int8_t *,
  socklen_t *, void **);
extern int inet6_opt_find(void *, socklen_t, int, u_int8_t,
  socklen_t *, void **);
extern int inet6_opt_get_val(void *, int, void *, socklen_t);

extern socklen_t inet6_rth_space(int, int);
extern void *inet6_rth_init(void *, socklen_t, int, int);
extern int inet6_rth_add(void *, const struct in6_addr *);
extern int inet6_rth_reverse(const void *, void *);
extern int inet6_rth_segments(const void *);
extern struct in6_addr *inet6_rth_getaddr(const void *, int);

# 783 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h" 2
# 796 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
extern int inetctlerrmap[];
extern struct niqueue ipintrq;
extern struct in_addr zeroin_addr;

struct mbuf;
struct sockaddr;
struct sockaddr_in;
struct ifaddr;
struct in_ifaddr;

int in_broadcast(struct in_addr, u_int);
int in_canforward(struct in_addr);
int in_cksum(struct mbuf *, int);
int in4_cksum(struct mbuf *, u_int8_t, int, int);
void in_proto_cksum_out(struct mbuf *, struct ifnet *);
void in_ifdetach(struct ifnet *);
int in_mask2len(struct in_addr *);
void in_len2mask(struct in_addr *, int);

char *inet_ntoa(struct in_addr);
int inet_nat64(int, const void *, void *, const void *, u_int8_t);
int inet_nat46(int, const void *, void *, const void *, u_int8_t);

const char *inet_ntop(int, const void *, char *, socklen_t);
const char *sockaddr_ntop(struct sockaddr *, char *, size_t);
# 831 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in.h"
static __inline struct sockaddr_in *
satosin(struct sockaddr *sa)
{
 return ((struct sockaddr_in *)(sa));
}

static __inline struct sockaddr *
sintosa(struct sockaddr_in *sin)
{
 return ((struct sockaddr *)(sin));
}

static __inline struct in_ifaddr *
ifatoia(struct ifaddr *ifa)
{
 return ((struct in_ifaddr *)(ifa));
}
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/radix.h" 1
# 42 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/radix.h"
struct radix_node {
 struct radix_mask *rn_mklist;
 struct radix_node *rn_p;
 short rn_b;
 char rn_bmask;
 u_char rn_flags;



 union {
  struct {
   caddr_t rn_Key;
   caddr_t rn_Mask;
   struct radix_node *rn_Dupedkey;
  } rn_leaf;
  struct {
   int rn_Off;
   struct radix_node *rn_L;
   struct radix_node *rn_R;
  } rn_node;
 } rn_u;
};
# 76 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/radix.h"
struct radix_mask {
 short rm_b;
 char rm_unused;
 u_char rm_flags;
 struct radix_mask *rm_mklist;
 union {
  caddr_t rmu_mask;
  struct radix_node *rmu_leaf;
 } rm_rmu;
 int rm_refs;
};




struct radix_node_head {
 struct radix_node *rnh_treetop;
 int rnh_addrsize;
 int rnh_pktsize;
 struct radix_node rnh_nodes[3];
 u_int rnh_rtableid;
};

void rn_init(unsigned int);
int rn_inithead(void **, int);
int rn_inithead0(struct radix_node_head *, int);
int rn_refines(void *, void *);
void rn_link_dupedkey(struct radix_node *, struct radix_node *, int);

int rn_walktree(struct radix_node_head *,
     int (*)(struct radix_node *, void *, u_int), void *);

struct radix_node *rn_addmask(void *, int, int);
struct radix_node *rn_addroute(void *, void *, struct radix_node_head *,
       struct radix_node [2], u_int8_t);
struct radix_node *rn_delete(void *, void *, struct radix_node_head *,
       struct radix_node *);
struct radix_node *rn_lookup(void *, void *, struct radix_node_head *);
struct radix_node *rn_match(void *, struct radix_node_head *);
# 55 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h" 2

union sockaddr_union {
 struct sockaddr sa;
 struct sockaddr_in sin;
 struct sockaddr_in6 sin6;
};
# 102 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct sockaddr_encap {
 u_int8_t sen_len;
 u_int8_t sen_family;
 u_int16_t sen_type;
 union {
  struct {
   u_int8_t Direction;
   struct in_addr Src;
   struct in_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip4;

  struct {
   u_int8_t Direction;
   struct in6_addr Src;
   struct in6_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip6;

  struct ipsec_policy *PolicyHead;
 } Sen;
};
# 163 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct ipsec_id {
 u_int16_t type;
 int16_t len;
};

struct ipsec_ids {
 struct rb_entry id_node_id;
 struct rb_entry id_node_flow;
 struct ipsec_id *id_local;
 struct ipsec_id *id_remote;
 u_int32_t id_flow;
 int id_refcount;
 struct timeout id_timeout;
};
struct ipsec_ids_flows { struct rb_tree rbh_root; };
struct ipsec_ids_tree { struct rb_tree rbh_root; };

struct ipsec_acquire {
 union sockaddr_union ipa_addr;
 u_int32_t ipa_seq;
 struct sockaddr_encap ipa_info;
 struct sockaddr_encap ipa_mask;
 struct timeout ipa_timeout;
 struct ipsec_policy *ipa_policy;
 struct inpcb *ipa_pcb;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_ipo_next;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_next;
};

struct ipsec_policy {
 struct radix_node ipo_nodes[2];
 struct sockaddr_encap ipo_addr;
 struct sockaddr_encap ipo_mask;

 union sockaddr_union ipo_src;
 union sockaddr_union ipo_dst;
# 209 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
 u_int64_t ipo_last_searched;

 u_int8_t ipo_flags;
 u_int8_t ipo_type;
 u_int8_t ipo_sproto;
 u_int ipo_rdomain;

 int ipo_ref_count;

 struct tdb *ipo_tdb;

 struct ipsec_ids *ipo_ids;

 struct ipo_acquires_head { struct ipsec_acquire *tqh_first; struct ipsec_acquire **tqh_last; } ipo_acquires;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_tdb_next;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_list;
};
# 243 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct tdb {
# 252 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
 struct tdb *tdb_hnext;
 struct tdb *tdb_dnext;
 struct tdb *tdb_snext;
 struct tdb *tdb_inext;
 struct tdb *tdb_onext;

 struct xformsw *tdb_xform;
 struct enc_xform *tdb_encalgxform;
 struct auth_hash *tdb_authalgxform;
 struct comp_algo *tdb_compalgxform;
# 281 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
 u_int32_t tdb_flags;

 struct timeout tdb_timer_tmo;
 struct timeout tdb_first_tmo;
 struct timeout tdb_stimer_tmo;
 struct timeout tdb_sfirst_tmo;

 u_int32_t tdb_seq;
 u_int32_t tdb_exp_allocations;
 u_int32_t tdb_soft_allocations;
 u_int32_t tdb_cur_allocations;

 u_int64_t tdb_exp_bytes;
 u_int64_t tdb_soft_bytes;
 u_int64_t tdb_cur_bytes;

 u_int64_t tdb_exp_timeout;
 u_int64_t tdb_soft_timeout;
 u_int64_t tdb_established;

 u_int64_t tdb_first_use;
 u_int64_t tdb_soft_first_use;
 u_int64_t tdb_exp_first_use;



 u_int64_t tdb_last_used;
 u_int64_t tdb_last_marked;

 u_int64_t tdb_cryptoid;

 u_int32_t tdb_spi;
 u_int16_t tdb_amxkeylen;
 u_int16_t tdb_emxkeylen;
 u_int16_t tdb_ivlen;
 u_int8_t tdb_sproto;
 u_int8_t tdb_wnd;
 u_int8_t tdb_satype;
 u_int8_t tdb_updates;

 union sockaddr_union tdb_dst;
 union sockaddr_union tdb_src;

 u_int8_t *tdb_amxkey;
 u_int8_t *tdb_emxkey;




 u_int64_t tdb_rpl;
 u_int32_t tdb_seen[((((2100+32)) + ((32) - 1)) / (32))];

 u_int8_t tdb_iv[4];

 struct ipsec_ids *tdb_ids;
 int tdb_ids_swapped;

 u_int32_t tdb_mtu;
 u_int64_t tdb_mtutimeout;

 u_int16_t tdb_udpencap_port;

 u_int16_t tdb_tag;
 u_int32_t tdb_tap;

 u_int tdb_rdomain;

 struct sockaddr_encap tdb_filter;
 struct sockaddr_encap tdb_filtermask;

 struct tdb_policy_head { struct ipsec_policy *tqh_first; struct ipsec_policy **tqh_last; } tdb_policy_head;
 struct { struct tdb *tqe_next; struct tdb **tqe_prev; } tdb_sync_entry;
};



struct tdb_ident {
 u_int32_t spi;
 union sockaddr_union dst;
 u_int8_t proto;
 u_int rdomain;
};

struct tdb_crypto {
 u_int32_t tc_spi;
 union sockaddr_union tc_dst;
 u_int8_t tc_proto;
 int tc_protoff;
 int tc_skip;
 u_int tc_rdomain;
};

struct ipsecinit {
 u_int8_t *ii_enckey;
 u_int8_t *ii_authkey;
 u_int16_t ii_enckeylen;
 u_int16_t ii_authkeylen;
 u_int8_t ii_encalg;
 u_int8_t ii_authalg;
 u_int8_t ii_compalg;
};
# 399 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct xformsw {
 u_short xf_type;
 u_short xf_flags;
 char *xf_name;
 int (*xf_attach)(void);
 int (*xf_init)(struct tdb *, struct xformsw *, struct ipsecinit *);
 int (*xf_zeroize)(struct tdb *);
 int (*xf_input)(struct mbuf *, struct tdb *, int, int);
 int (*xf_output)(struct mbuf *, struct tdb *, struct mbuf **,
     int, int);
};

extern int ipsec_in_use;
extern u_int64_t ipsec_last_added;
extern int ipsec_policy_pool_initialized;

extern int ipsec_keep_invalid;
extern int ipsec_require_pfs;
extern int ipsec_expire_acquire;
extern int ipsec_soft_allocations;
extern int ipsec_exp_allocations;
extern int ipsec_soft_bytes;
extern int ipsec_exp_bytes;
extern int ipsec_soft_timeout;
extern int ipsec_exp_timeout;
extern int ipsec_soft_first_use;
extern int ipsec_exp_first_use;

extern char ipsec_def_enc[];
extern char ipsec_def_auth[];
extern char ipsec_def_comp[];

extern struct enc_xform enc_xform_des;
extern struct enc_xform enc_xform_3des;
extern struct enc_xform enc_xform_blf;
extern struct enc_xform enc_xform_cast5;

extern struct auth_hash auth_hash_hmac_md5_96;
extern struct auth_hash auth_hash_hmac_sha1_96;
extern struct auth_hash auth_hash_hmac_ripemd_160_96;

extern struct comp_algo comp_algo_deflate;

extern struct ipsec_policy_head { struct ipsec_policy *tqh_first; struct ipsec_policy **tqh_last; } ipsec_policy_head;
extern struct ipsec_acquire_head { struct ipsec_acquire *tqh_first; struct ipsec_acquire **tqh_last; } ipsec_acquire_head;







struct radix_node_head *spd_table_add(unsigned int);
struct radix_node_head *spd_table_get(unsigned int);


uint32_t reserve_spi(u_int, u_int32_t, u_int32_t, union sockaddr_union *,
  union sockaddr_union *, u_int8_t, int *);
struct tdb *gettdb(u_int, u_int32_t, union sockaddr_union *, u_int8_t);
struct tdb *gettdbbydst(u_int, union sockaddr_union *, u_int8_t,
  struct ipsec_ids *,
  struct sockaddr_encap *, struct sockaddr_encap *);
struct tdb *gettdbbysrc(u_int, union sockaddr_union *, u_int8_t,
  struct ipsec_ids *,
  struct sockaddr_encap *, struct sockaddr_encap *);
struct tdb *gettdbbysrcdst(u_int, u_int32_t, union sockaddr_union *,
  union sockaddr_union *, u_int8_t);
void puttdb(struct tdb *);
void tdb_delete(struct tdb *);
struct tdb *tdb_alloc(u_int);
void tdb_free(struct tdb *);
int tdb_init(struct tdb *, u_int16_t, struct ipsecinit *);
int tdb_walk(u_int, int (*)(struct tdb *, void *, int), void *);


int ipe4_attach(void);
int ipe4_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int ipe4_zeroize(struct tdb *);
void ipe4_input(struct mbuf *, ...);
void ipip_input(struct mbuf *, int, struct ifnet *, int);
int ipip_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);

void ip4_input(struct mbuf *, ...);


int ip4_input6(struct mbuf **, int *, int);



int ah_attach(void);
int ah_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int ah_zeroize(struct tdb *);
int ah_input(struct mbuf *, struct tdb *, int, int);
int ah_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
int ah_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ah4_input(struct mbuf *, ...);
void *ah4_ctlinput(int, struct sockaddr *, u_int, void *);
void *udpencap_ctlinput(int, struct sockaddr *, u_int, void *);


int ah6_input(struct mbuf **, int *, int);



int esp_attach(void);
int esp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int esp_zeroize(struct tdb *);
int esp_input(struct mbuf *, struct tdb *, int, int);
int esp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
int esp_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void esp4_input(struct mbuf *, ...);
void *esp4_ctlinput(int, struct sockaddr *, u_int, void *);


int esp6_input(struct mbuf **, int *, int);



int ipcomp_attach(void);
int ipcomp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
int ipcomp_zeroize(struct tdb *);
int ipcomp_input(struct mbuf *, struct tdb *, int, int);
int ipcomp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
int ipcomp_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ipcomp4_input(struct mbuf *, ...);


int ipcomp6_input(struct mbuf **, int *, int);



int tcp_signature_tdb_attach(void);
int tcp_signature_tdb_init(struct tdb *, struct xformsw *,
     struct ipsecinit *);
int tcp_signature_tdb_zeroize(struct tdb *);
int tcp_signature_tdb_input(struct mbuf *, struct tdb *, int, int);
int tcp_signature_tdb_output(struct mbuf *, struct tdb *, struct mbuf **,
   int, int);


int checkreplaywindow(struct tdb *, u_int32_t, u_int32_t *, int);


int ipsp_process_packet(struct mbuf *, struct tdb *, int, int);
int ipsp_process_done(struct mbuf *, struct tdb *);
struct tdb *ipsp_spd_lookup(struct mbuf *, int, int, int *, int,
     struct tdb *, struct inpcb *, u_int32_t);
struct tdb *ipsp_spd_inp(struct mbuf *, int, int, int *, int,
     struct tdb *, struct inpcb *, struct ipsec_policy *);
int ipsp_is_unspecified(union sockaddr_union);
int ipsp_aux_match(struct tdb *, struct ipsec_ids *,
     struct sockaddr_encap *, struct sockaddr_encap *);
int ipsp_ids_match(struct ipsec_ids *, struct ipsec_ids *);
struct ipsec_ids *ipsp_ids_insert(struct ipsec_ids *);
struct ipsec_ids *ipsp_ids_lookup(u_int32_t);
void ipsp_ids_free(struct ipsec_ids *);

int ipsec_common_input(struct mbuf *, int, int, int, int, int);
int ipsec_common_input_cb(struct mbuf *, struct tdb *, int, int);
int ipsec_delete_policy(struct ipsec_policy *);
ssize_t ipsec_hdrsz(struct tdb *);
void ipsec_adjust_mtu(struct mbuf *, u_int32_t);
struct ipsec_acquire *ipsec_get_acquire(u_int32_t);
# 79 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_var.h" 1
# 49 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_var.h"
struct ipovly {
 u_int8_t ih_x1[9];
 u_int8_t ih_pr;
 u_int16_t ih_len;
 struct in_addr ih_src;
 struct in_addr ih_dst;
};

struct ipstat {
 u_long ips_total;
 u_long ips_badsum;
 u_long ips_tooshort;
 u_long ips_toosmall;
 u_long ips_badhlen;
 u_long ips_badlen;
 u_long ips_fragments;
 u_long ips_fragdropped;
 u_long ips_fragtimeout;
 u_long ips_forward;
 u_long ips_cantforward;
 u_long ips_redirectsent;
 u_long ips_noproto;
 u_long ips_delivered;
 u_long ips_localout;
 u_long ips_odropped;
 u_long ips_reassembled;
 u_long ips_fragmented;
 u_long ips_ofragments;
 u_long ips_cantfrag;
 u_long ips_badoptions;
 u_long ips_noroute;
 u_long ips_badvers;
 u_long ips_rawout;
 u_long ips_badfrags;
 u_long ips_rcvmemdrop;
 u_long ips_toolong;
 u_long ips_nogif;
 u_long ips_badaddr;
 u_long ips_inswcsum;
 u_long ips_outswcsum;
 u_long ips_notmember;
};

struct ipoption {
 struct in_addr ipopt_dst;
 int8_t ipopt_list[40];
};



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/percpu.h" 1
# 34 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/percpu.h"
struct cpumem {
 void *mem;
};

struct cpumem_iter {
 unsigned int cpu;
} __attribute__((__unused__));

struct counters_ref {
 uint64_t g;
 uint64_t *c;
};



# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/atomic.h" 1
# 50 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/percpu.h" 2

struct pool;

struct cpumem *cpumem_get(struct pool *);
void cpumem_put(struct pool *, struct cpumem *);

struct cpumem *cpumem_malloc(size_t, int);
struct cpumem *cpumem_malloc_ncpus(struct cpumem *, size_t, int);
void cpumem_free(struct cpumem *, int, size_t);

void *cpumem_first(struct cpumem_iter *, struct cpumem *);
void *cpumem_next(struct cpumem_iter *, struct cpumem *);

static inline void *
cpumem_enter(struct cpumem *cm)
{



 return (cm);

}

static inline void
cpumem_leave(struct cpumem *cm, void *mem)
{

}
# 113 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/percpu.h"
struct cpumem *counters_alloc(unsigned int, int);
struct cpumem *counters_alloc_ncpus(struct cpumem *, unsigned int, int);
void counters_free(struct cpumem *, int, unsigned int);
void counters_read(struct cpumem *, uint64_t *, unsigned int);
void counters_zero(struct cpumem *, unsigned int);

static inline uint64_t *
counters_enter(struct counters_ref *ref, struct cpumem *cm)
{
 ref->c = cpumem_enter(cm);





 return (ref->c);

}

static inline void
counters_leave(struct counters_ref *ref, struct cpumem *cm)
{




 cpumem_leave(cm, ref->c);
}

static inline void
counters_inc(struct cpumem *cm, unsigned int c)
{
 struct counters_ref ref;
 uint64_t *counters;

 counters = counters_enter(&ref, cm);
 counters[c]++;
 counters_leave(&ref, cm);
}

static inline void
counters_add(struct cpumem *cm, unsigned int c, uint64_t v)
{
 struct counters_ref ref;
 uint64_t *counters;

 counters = counters_enter(&ref, cm);
 counters[c] += v;
 counters_leave(&ref, cm);
}

static inline void
counters_pkt(struct cpumem *cm, unsigned int c, unsigned int b, uint64_t v)
{
 struct counters_ref ref;
 uint64_t *counters;

 counters = counters_enter(&ref, cm);
 counters[c]++;
 counters[b] += v;
 counters_leave(&ref, cm);
}
# 100 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_var.h" 2

enum ipstat_counters {
 ips_total,
 ips_badsum,
 ips_tooshort,
 ips_toosmall,
 ips_badhlen,
 ips_badlen,
 ips_fragments,
 ips_fragdropped,
 ips_fragtimeout,
 ips_forward,
 ips_cantforward,
 ips_redirectsent,
 ips_noproto,
 ips_delivered,
 ips_localout,
 ips_odropped,
 ips_reassembled,
 ips_fragmented,
 ips_ofragments,
 ips_cantfrag,
 ips_badoptions,
 ips_noroute,
 ips_badvers,
 ips_rawout,
 ips_badfrags,
 ips_rcvmemdrop,
 ips_toolong,
 ips_nogif,
 ips_badaddr,
 ips_inswcsum,
 ips_outswcsum,
 ips_notmember,

 ips_ncounters
};

extern struct cpumem *ipcounters;

static inline void
ipstat_inc(enum ipstat_counters c)
{
 counters_inc(ipcounters, c);
}





struct ip_moptions {
 struct in_multi **imo_membership;
 unsigned short imo_ifidx;
 u_int8_t imo_ttl;
 u_int8_t imo_loop;
 u_int16_t imo_num_memberships;
 u_int16_t imo_max_memberships;
};






struct ipqehead { struct ipqent *lh_first; };
struct ipqent {
 struct { struct ipqent *le_next; struct ipqent **le_prev; } ipqe_q;
 struct ip *ipqe_ip;
 struct mbuf *ipqe_m;
 u_int8_t ipqe_mff;
};







struct ipq {
 struct { struct ipq *le_next; struct ipq **le_prev; } ipq_q;
 u_int8_t ipq_ttl;
 u_int8_t ipq_p;
 u_int16_t ipq_id;
 struct ipqehead ipq_fragq;
 struct in_addr ipq_src, ipq_dst;
};







extern struct ipstat ipstat;
extern struct ipqhead { struct ipq *lh_first; } ipq;
extern int ip_defttl;

extern struct socket *ip_mrouter[];




extern int ip_mtudisc;
extern u_int ip_mtudisc_timeout;

extern int ipport_firstauto;
extern int ipport_lastauto;
extern int ipport_hifirstauto;
extern int ipport_hilastauto;
extern int encdebug;
extern int ipforwarding;

extern int ipmforwarding;

extern int ipmultipath;
extern int la_hold_total;

extern struct rttimer_queue *ip_mtudisc_timeout_q;
extern struct pool ipqent_pool;
struct route;
struct inpcb;

int ip_ctloutput(int, struct socket *, int, int, struct mbuf **);
void ip_drain(void);
void ip_flush(void);
int ip_fragment(struct mbuf *, struct ifnet *, u_long);
void ip_freef(struct ipq *);
void ip_freemoptions(struct ip_moptions *);
int ip_getmoptions(int, struct ip_moptions *, struct mbuf **);
void ip_init(void);
struct mbuf*
  ip_insertoptions(struct mbuf *, struct mbuf *, int *);
int ip_mforward(struct mbuf *, struct ifnet *);
int ip_optcopy(struct ip *, struct ip *);
int ip_output(struct mbuf *, struct mbuf *, struct route *, int,
     struct ip_moptions *, struct inpcb *, u_int32_t);
int ip_pcbopts(struct mbuf **, struct mbuf *);
struct mbuf *
  ip_reass(struct ipqent *, struct ipq *);
u_int16_t
  ip_randomid(void);
void ip_send(struct mbuf *);
int ip_setmoptions(int, struct ip_moptions **, struct mbuf *, u_int);
void ip_slowtimo(void);
struct mbuf *
  ip_srcroute(struct mbuf *);
void ip_stripoptions(struct mbuf *);
int ip_sysctl(int *, u_int, void *, size_t *, void *, size_t);
void ip_savecontrol(struct inpcb *, struct mbuf **, struct ip *,
     struct mbuf *);
void ipintr(void);
void ipv4_input(struct mbuf *);
void ip_forward(struct mbuf *, struct ifnet *, struct rtentry *, int);
int rip_ctloutput(int, struct socket *, int, int, struct mbuf **);
void rip_init(void);
void rip_input(struct mbuf *, ...);
int rip_output(struct mbuf *, ...);
int rip_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);
# 80 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2.h" 1
# 70 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2.h"
struct sadb_msg {
 uint8_t sadb_msg_version;
 uint8_t sadb_msg_type;
 uint8_t sadb_msg_errno;
 uint8_t sadb_msg_satype;
 uint16_t sadb_msg_len;
 uint16_t sadb_msg_reserved;
 uint32_t sadb_msg_seq;
 uint32_t sadb_msg_pid;
};

struct sadb_ext {
 uint16_t sadb_ext_len;
 uint16_t sadb_ext_type;
};

struct sadb_sa {
 uint16_t sadb_sa_len;
 uint16_t sadb_sa_exttype;
 uint32_t sadb_sa_spi;
 uint8_t sadb_sa_replay;
 uint8_t sadb_sa_state;
 uint8_t sadb_sa_auth;
 uint8_t sadb_sa_encrypt;
 uint32_t sadb_sa_flags;
};

struct sadb_lifetime {
 uint16_t sadb_lifetime_len;
 uint16_t sadb_lifetime_exttype;
 uint32_t sadb_lifetime_allocations;
 uint64_t sadb_lifetime_bytes;
 uint64_t sadb_lifetime_addtime;
 uint64_t sadb_lifetime_usetime;
};

struct sadb_address {
 uint16_t sadb_address_len;
 uint16_t sadb_address_exttype;
 uint32_t sadb_address_reserved;
};

struct sadb_key {
 uint16_t sadb_key_len;
 uint16_t sadb_key_exttype;
 uint16_t sadb_key_bits;
 uint16_t sadb_key_reserved;
};

struct sadb_ident {
 uint16_t sadb_ident_len;
 uint16_t sadb_ident_exttype;
 uint16_t sadb_ident_type;
 uint16_t sadb_ident_reserved;
 uint64_t sadb_ident_id;
};

struct sadb_sens {
 uint16_t sadb_sens_len;
 uint16_t sadb_sens_exttype;
 uint32_t sadb_sens_dpd;
 uint8_t sadb_sens_sens_level;
 uint8_t sadb_sens_sens_len;
 uint8_t sadb_sens_integ_level;
 uint8_t sadb_sens_integ_len;
 uint32_t sadb_sens_reserved;
};

struct sadb_prop {
 uint16_t sadb_prop_len;
 uint16_t sadb_prop_exttype;
 uint8_t sadb_prop_num;
 uint8_t sadb_prop_replay;
 uint16_t sadb_prop_reserved;
};

struct sadb_comb {
 uint8_t sadb_comb_auth;
 uint8_t sadb_comb_encrypt;
 uint16_t sadb_comb_flags;
 uint16_t sadb_comb_auth_minbits;
 uint16_t sadb_comb_auth_maxbits;
 uint16_t sadb_comb_encrypt_minbits;
 uint16_t sadb_comb_encrypt_maxbits;
 uint32_t sadb_comb_reserved;
 uint32_t sadb_comb_soft_allocations;
 uint32_t sadb_comb_hard_allocations;
 uint64_t sadb_comb_soft_bytes;
 uint64_t sadb_comb_hard_bytes;
 uint64_t sadb_comb_soft_addtime;
 uint64_t sadb_comb_hard_addtime;
 uint64_t sadb_comb_soft_usetime;
 uint64_t sadb_comb_hard_usetime;
};

struct sadb_supported {
 uint16_t sadb_supported_len;
 uint16_t sadb_supported_exttype;
 uint32_t sadb_supported_reserved;
};

struct sadb_alg {
 uint8_t sadb_alg_id;
 uint8_t sadb_alg_ivlen;
 uint16_t sadb_alg_minbits;
 uint16_t sadb_alg_maxbits;
 uint16_t sadb_alg_reserved;
};

struct sadb_spirange {
 uint16_t sadb_spirange_len;
 uint16_t sadb_spirange_exttype;
 uint32_t sadb_spirange_min;
 uint32_t sadb_spirange_max;
 uint32_t sadb_spirange_reserved;
};

struct sadb_protocol {
 uint16_t sadb_protocol_len;
 uint16_t sadb_protocol_exttype;
 uint8_t sadb_protocol_proto;
 uint8_t sadb_protocol_direction;
 uint8_t sadb_protocol_flags;
 uint8_t sadb_protocol_reserved2;
};

struct sadb_x_policy {
 uint16_t sadb_x_policy_len;
 uint16_t sadb_x_policy_exttype;
 u_int32_t sadb_x_policy_seq;
};

struct sadb_x_udpencap {
 uint16_t sadb_x_udpencap_len;
 uint16_t sadb_x_udpencap_exttype;
 uint16_t sadb_x_udpencap_port;
 uint16_t sadb_x_udpencap_reserved;
};

struct sadb_x_tag {
 uint16_t sadb_x_tag_len;
 uint16_t sadb_x_tag_exttype;
 u_int32_t sadb_x_tag_taglen;
};

struct sadb_x_tap {
 uint16_t sadb_x_tap_len;
 uint16_t sadb_x_tap_exttype;
 u_int32_t sadb_x_tap_unit;
};
# 362 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2.h"
struct tdb;
struct socket;
struct mbuf;




struct pfkey_version {
 int protocol;
 int (*create)(struct socket *socket);
 int (*release)(struct socket *socket);
 int (*send)(struct socket *socket, void *message, int len);
 int (*sysctl)(int *, u_int, void *, size_t *, void *, size_t);
};

struct pfkeyv2_socket {
 struct pfkeyv2_socket *next;
 struct socket *socket;
 int flags;
 uint32_t pid;
 uint32_t registration;
 uint rdomain;
};

struct dump_state {
 struct sadb_msg *sadb_msg;
 struct socket *socket;
};

int pfkeyv2_init(void);
int pfkeyv2_cleanup(void);
int pfkeyv2_parsemessage(void *, int, void **);
int pfkeyv2_expire(struct tdb *, u_int16_t);
int pfkeyv2_acquire(struct ipsec_policy *, union sockaddr_union *,
    union sockaddr_union *, u_int32_t *, struct sockaddr_encap *);

int pfkey_register(struct pfkey_version *version);
int pfkey_unregister(struct pfkey_version *version);
int pfkey_sendup(struct socket *socket, struct mbuf *packet, int more);

int pfkeyv2_create(struct socket *);
int pfkeyv2_get(struct tdb *, void **, void **, int *);
int pfkeyv2_policy(struct ipsec_acquire *, void **, void **);
int pfkeyv2_release(struct socket *);
int pfkeyv2_send(struct socket *, void *, int);
int pfkeyv2_sendmessage(void **, int, struct socket *, u_int8_t, int, u_int);
int pfkeyv2_dump_policy(struct ipsec_policy *, void **, void **, int *);
int pfkeyv2_dump_walker(struct tdb *, void *, int);
int pfkeyv2_flush_walker(struct tdb *, void *, int);
int pfkeyv2_get_proto_alg(u_int8_t, u_int8_t *, int *);
int pfkeyv2_sysctl(int *, u_int, void *, size_t *, void *, size_t);
int pfkeyv2_sysctl_walker(struct tdb *, void *, int);
int pfkeyv2_ipo_walk(u_int, int (*)(struct ipsec_policy *, void *), void *);
int pfkeyv2_sysctl_dump(void *);
int pfkeyv2_sysctl_policydumper(struct ipsec_policy *, void *);

int pfdatatopacket(void *, int, struct mbuf **);

void export_address(void **, struct sockaddr *);
void export_identities(void **, struct ipsec_ids *, int, void **);
void export_lifetime(void **, struct tdb *, int);
void export_sa(void **, struct tdb *);
void export_flow(void **, u_int8_t, struct sockaddr_encap *,
    struct sockaddr_encap *, void **);
void export_key(void **, struct tdb *, int);
void export_udpencap(void **, struct tdb *);
void export_tag(void **, struct tdb *);
void export_tap(void **, struct tdb *);

void import_address(struct sockaddr *, struct sadb_address *);
void import_identities(struct ipsec_ids **, int, struct sadb_ident *,
    struct sadb_ident *);
void import_key(struct ipsecinit *, struct sadb_key *, int);
void import_lifetime(struct tdb *, struct sadb_lifetime *, int);
void import_sa(struct tdb *, struct sadb_sa *, struct ipsecinit *);
void import_flow(struct sockaddr_encap *, struct sockaddr_encap *,
    struct sadb_address *, struct sadb_address *, struct sadb_address *,
    struct sadb_address *, struct sadb_protocol *, struct sadb_protocol *);
void import_udpencap(struct tdb *, struct sadb_x_udpencap *);
void import_tag(struct tdb *, struct sadb_x_tag *);
void import_tap(struct tdb *, struct sadb_x_tap *);
# 81 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2


# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h" 1
# 46 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_nameindex {
 unsigned int if_index;
 char *if_name;
};
# 65 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_clonereq {
 int ifcr_total;
 int ifcr_count;
 char *ifcr_buffer;
};



struct if_rxring {
 int rxr_adjusted;
 u_int rxr_alive;
 u_int rxr_cwm;
 u_int rxr_lwm;
 u_int rxr_hwm;
};

struct if_rxring_info {
 char ifr_name[16];
 u_int ifr_size;
 struct if_rxring ifr_info;
};


struct if_rxrinfo {
 u_int ifri_total;
 struct if_rxring_info *ifri_entries;
};





struct if_data {

 u_char ifi_type;
 u_char ifi_addrlen;
 u_char ifi_hdrlen;
 u_char ifi_link_state;
 u_int32_t ifi_mtu;
 u_int32_t ifi_metric;
 u_int32_t ifi_rdomain;
 u_int64_t ifi_baudrate;

 u_int64_t ifi_ipackets;
 u_int64_t ifi_ierrors;
 u_int64_t ifi_opackets;
 u_int64_t ifi_oerrors;
 u_int64_t ifi_collisions;
 u_int64_t ifi_ibytes;
 u_int64_t ifi_obytes;
 u_int64_t ifi_imcasts;
 u_int64_t ifi_omcasts;
 u_int64_t ifi_iqdrops;
 u_int64_t ifi_oqdrops;
 u_int64_t ifi_noproto;
 u_int32_t ifi_capabilities;
 struct timeval ifi_lastchange;
};
# 145 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_status_description {
 u_char ifs_type;
 u_char ifs_state;
 const char *ifs_string;
};
# 258 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct if_msghdr {
 u_short ifm_msglen;
 u_char ifm_version;
 u_char ifm_type;
 u_short ifm_hdrlen;
 u_short ifm_index;
 u_short ifm_tableid;
 u_char ifm_pad1;
 u_char ifm_pad2;
 int ifm_addrs;
 int ifm_flags;
 int ifm_xflags;
 struct if_data ifm_data;
};





struct ifa_msghdr {
 u_short ifam_msglen;
 u_char ifam_version;
 u_char ifam_type;
 u_short ifam_hdrlen;
 u_short ifam_index;
 u_short ifam_tableid;
 u_char ifam_pad1;
 u_char ifam_pad2;
 int ifam_addrs;
 int ifam_flags;
 int ifam_metric;
};




struct if_announcemsghdr {
 u_short ifan_msglen;
 u_char ifan_version;
 u_char ifan_type;
 u_short ifan_hdrlen;
 u_short ifan_index;
 u_short ifan_what;
 char ifan_name[16];
};





struct if_nameindex_msg {
 unsigned int if_index;
 char if_name[16];
};
# 320 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
struct ifg_req {
 union {
  char ifgrqu_group[16];
  char ifgrqu_member[16];
 } ifgrq_ifgrqu;


};

struct ifg_attrib {
 int ifg_carp_demoted;
};




struct ifgroupreq {
 char ifgr_name[16];
 u_int ifgr_len;
 union {
  char ifgru_group[16];
  struct ifg_req *ifgru_groups;
  struct ifg_attrib ifgru_attrib;
 } ifgr_ifgru;



};







struct ifreq {
 char ifr_name[16];
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  short ifru_flags;
  int ifru_metric;
  int64_t ifru_vnetid;
  uint64_t ifru_media;
  caddr_t ifru_data;
  unsigned int ifru_index;
 } ifr_ifru;
# 382 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h"
};

struct ifaliasreq {
 char ifra_name[16];
 union {
  struct sockaddr ifrau_addr;
  int ifrau_align;
  } ifra_ifrau;



 struct sockaddr ifra_dstaddr;

 struct sockaddr ifra_mask;
};

struct ifmediareq {
 char ifm_name[16];
 uint64_t ifm_current;
 uint64_t ifm_mask;
 uint64_t ifm_status;
 uint64_t ifm_active;
 int ifm_count;
 uint64_t *ifm_ulist;
};

struct ifkalivereq {
 char ikar_name[16];
 int ikar_timeo;
 int ikar_cnt;
};







struct ifconf {
 int ifc_len;
 union {
  caddr_t ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;


};




struct if_laddrreq {
 char iflr_name[16];
 unsigned int flags;

 unsigned int prefixlen;
 struct sockaddr_storage addr;
 struct sockaddr_storage dstaddr;
};


struct if_afreq {
 char ifar_name[16];
 sa_family_t ifar_af;
};


struct if_parent {
 char ifp_name[16];
 char ifp_parent[16];
};

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_arp.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_arp.h"
struct arphdr {
 u_int16_t ar_hrd;




 u_int16_t ar_pro;
 u_int8_t ar_hln;
 u_int8_t ar_pln;
 u_int16_t ar_op;
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if_arp.h"
};




struct arpreq {
 struct sockaddr arp_pa;
 struct sockaddr arp_ha;
 int arp_flags;
};
# 455 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/if.h" 2


struct socket;
struct ifnet;

void if_alloc_sadl(struct ifnet *);
void if_free_sadl(struct ifnet *);
void if_attach(struct ifnet *);
void if_attachtail(struct ifnet *);
void if_attachhead(struct ifnet *);
void if_deactivate(struct ifnet *);
void if_detach(struct ifnet *);
void if_down(struct ifnet *);
void if_downall(void);
void if_link_state_change(struct ifnet *);
void if_up(struct ifnet *);
int ifconf(u_long, caddr_t);
void ifinit(void);
int ifioctl(struct socket *, u_long, caddr_t, struct proc *);
int ifpromisc(struct ifnet *, int);
struct ifg_group *if_creategroup(const char *);
int if_addgroup(struct ifnet *, const char *);
int if_delgroup(struct ifnet *, const char *);
void if_group_routechange(struct sockaddr *, struct sockaddr *);
struct ifnet *ifunit(const char *);
struct ifnet *if_get(unsigned int);
void if_put(struct ifnet *);
void ifnewlladdr(struct ifnet *);
void if_congestion(void);
int if_congested(void);
__attribute__((__noreturn__)) void unhandled_af(int);
int if_setlladdr(struct ifnet *, const uint8_t *);
# 84 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/syslimits.h" 1
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h" 2





# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h" 1
# 49 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rt_kmetrics {
 u_int64_t rmx_pksent;
 int64_t rmx_expire;
 u_int rmx_locks;
 u_int rmx_mtu;
};




struct rt_metrics {
 u_int64_t rmx_pksent;
 int64_t rmx_expire;
 u_int rmx_locks;
 u_int rmx_mtu;
 u_int rmx_refcnt;

 u_int rmx_hopcount;
 u_int rmx_recvpipe;
 u_int rmx_sendpipe;
 u_int rmx_ssthresh;
 u_int rmx_rtt;
 u_int rmx_rttvar;
 u_int rmx_pad;
};
# 84 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/rtable.h" 1
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/rtable.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/art.h" 1
# 29 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/art.h"
struct art_root {
 struct srp ar_root;
 struct rwlock ar_lock;
 uint8_t ar_bits[32];
 uint8_t ar_nlvl;
 uint8_t ar_alen;
 uint8_t ar_off;
 unsigned int ar_rtableid;
};





struct rtentry;




struct art_node {
 struct srpl an_rtlist;
 union {
  struct sockaddr *an__dst;
  struct art_node *an__gc;
 } an_pointer;
 uint8_t an_plen;
};



void art_init(void);
struct art_root *art_alloc(unsigned int, unsigned int, unsigned int);
struct art_node *art_insert(struct art_root *, struct art_node *, uint8_t *,
       int);
struct art_node *art_delete(struct art_root *, struct art_node *, uint8_t *,
       int);
struct art_node *art_match(struct art_root *, uint8_t *, struct srp_ref *);
struct art_node *art_lookup(struct art_root *, uint8_t *, int,
       struct srp_ref *);
int art_walk(struct art_root *,
       int (*)(struct art_node *, void *), void *);

struct art_node *art_get(struct sockaddr *, uint8_t);
void art_put(struct art_node *);
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/rtable.h" 2







int rtable_satoplen(sa_family_t, struct sockaddr *);

void rtable_init(void);
int rtable_exists(unsigned int);
int rtable_add(unsigned int);
unsigned int rtable_l2(unsigned int);
unsigned int rtable_loindex(unsigned int);
void rtable_l2set(unsigned int, unsigned int, unsigned int);

struct rtentry *rtable_lookup(unsigned int, struct sockaddr *,
       struct sockaddr *, struct sockaddr *, uint8_t);
struct rtentry *rtable_match(unsigned int, struct sockaddr *, uint32_t *);
struct rtentry *rtable_iterate(struct rtentry *);
int rtable_insert(unsigned int, struct sockaddr *,
       struct sockaddr *, struct sockaddr *, uint8_t,
       struct rtentry *);
int rtable_delete(unsigned int, struct sockaddr *,
       struct sockaddr *, struct rtentry *);
int rtable_walk(unsigned int, sa_family_t,
       int (*)(struct rtentry *, void *, unsigned int), void *);

int rtable_mpath_capable(unsigned int, sa_family_t);
struct rtentry *rtable_mpath_match(unsigned int, struct rtentry *,
       struct sockaddr *, uint8_t);
int rtable_mpath_reprio(unsigned int, struct sockaddr *,
       struct sockaddr *, uint8_t, struct rtentry *);
# 85 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h" 2
# 95 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rtentry {



 struct sockaddr *rt_dest;
 struct { struct srp se_next; } rt_next;

 struct sockaddr *rt_gateway;
 struct ifaddr *rt_ifa;
 caddr_t rt_llinfo;

 union {
  struct rtentry *_nh;
  unsigned int _ref;
 } RT_gw;


 struct rtentry *rt_parent;
 struct { struct rttimer *lh_first; } rt_timer;
 struct rt_kmetrics rt_rmx;
 unsigned int rt_ifidx;
 unsigned int rt_flags;
 int rt_refcnt;

 int rt_plen;

 uint16_t rt_labelid;
 uint8_t rt_priority;
};
# 178 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rtstat {
 u_int32_t rts_badredirect;
 u_int32_t rts_dynamic;
 u_int32_t rts_newgateway;
 u_int32_t rts_unreach;
 u_int32_t rts_wildcard;
};




struct rt_tableinfo {
 u_short rti_tableid;
 u_short rti_domainid;
};




struct rt_msghdr {
 u_short rtm_msglen;
 u_char rtm_version;
 u_char rtm_type;
 u_short rtm_hdrlen;
 u_short rtm_index;
 u_short rtm_tableid;
 u_char rtm_priority;
 u_char rtm_mpls;
 int rtm_addrs;
 int rtm_flags;
 int rtm_fmask;
 pid_t rtm_pid;
 int rtm_seq;
 int rtm_errno;
 u_int rtm_inits;
 struct rt_metrics rtm_rmx;
};
# 292 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct sockaddr_rtlabel {
 u_int8_t sr_len;
 sa_family_t sr_family;
 char sr_label[32];
};






struct route {
 struct rtentry *ro_rt;
 u_long ro_tableid;
 struct sockaddr ro_dst;
};

struct rt_addrinfo {
 int rti_addrs;
 struct sockaddr *rti_info[11];
 int rti_flags;
 struct ifaddr *rti_ifa;
 struct rt_msghdr *rti_rtm;
 u_char rti_mpls;
};
# 325 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/route.h"
struct rttimer {
 struct { struct rttimer *tqe_next; struct rttimer **tqe_prev; } rtt_next;
 struct { struct rttimer *le_next; struct rttimer **le_prev; } rtt_link;
 struct rttimer_queue *rtt_queue;
 struct rtentry *rtt_rt;
 void (*rtt_func)(struct rtentry *,
       struct rttimer *);
 time_t rtt_time;
 u_int rtt_tableid;
};

struct rttimer_queue {
 long rtq_timeout;
 unsigned long rtq_count;
 struct { struct rttimer *tqh_first; struct rttimer **tqh_last; } rtq_head;
 struct { struct rttimer_queue *le_next; struct rttimer_queue **le_prev; } rtq_link;
};

const char *rtlabel_id2name(u_int16_t);
u_int16_t rtlabel_name2id(char *);
struct sockaddr *rtlabel_id2sa(u_int16_t, struct sockaddr_rtlabel *);
void rtlabel_unref(u_int16_t);






extern struct rtstat rtstat;

struct mbuf;
struct socket;
struct ifnet;
struct sockaddr_in6;
struct bfd_config;

void route_init(void);
int route_output(struct mbuf *, ...);
int route_usrreq(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *, struct proc *);
void rt_ifmsg(struct ifnet *);
void rt_ifannouncemsg(struct ifnet *, int);
void rt_bfdmsg(struct bfd_config *);
void rt_maskedcopy(struct sockaddr *,
     struct sockaddr *, struct sockaddr *);
struct sockaddr *rt_plen2mask(struct rtentry *, struct sockaddr_in6 *);
void rt_sendmsg(struct rtentry *, int, u_int);
void rt_sendaddrmsg(struct rtentry *, int, struct ifaddr *);
void rt_missmsg(int, struct rt_addrinfo *, int, uint8_t, u_int, int, u_int);
int rt_setgate(struct rtentry *, struct sockaddr *, u_int);
struct rtentry *rt_getll(struct rtentry *);
void rt_setmetrics(u_long, const struct rt_metrics *, struct rt_kmetrics *);
void rt_getmetrics(const struct rt_kmetrics *, struct rt_metrics *);

int rt_timer_add(struct rtentry *,
               void(*)(struct rtentry *, struct rttimer *),
        struct rttimer_queue *, u_int);
void rt_timer_remove_all(struct rtentry *);
struct rttimer_queue *rt_timer_queue_create(u_int);
void rt_timer_queue_change(struct rttimer_queue *, long);
void rt_timer_queue_destroy(struct rttimer_queue *);
unsigned long rt_timer_queue_count(struct rttimer_queue *);
void rt_timer_timer(void *);

int rtisvalid(struct rtentry *);
int rt_hash(struct rtentry *, struct sockaddr *, uint32_t *);



struct rtentry *rtalloc_mpath(struct sockaddr *, uint32_t *, u_int);

struct rtentry *rtalloc(struct sockaddr *, int, unsigned int);
void rtref(struct rtentry *);
void rtfree(struct rtentry *);

int rt_getifa(struct rt_addrinfo *, u_int);
int rt_ifa_add(struct ifaddr *, int, struct sockaddr *);
int rt_ifa_del(struct ifaddr *, int, struct sockaddr *);
void rt_ifa_purge(struct ifaddr *);
int rt_ifa_addlocal(struct ifaddr *);
int rt_ifa_dellocal(struct ifaddr *);
void rtredirect(struct sockaddr *, struct sockaddr *, struct sockaddr *, struct rtentry **, unsigned int);
int rtrequest(int, struct rt_addrinfo *, u_int8_t, struct rtentry **,
      u_int);

void rt_if_track(struct ifnet *);
int rt_if_linkstate_change(struct rtentry *, void *, u_int);

int rtdeletemsg(struct rtentry *, struct ifnet *, u_int);
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h" 2

struct ip;
struct ip6_hdr;
# 61 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
typedef struct refcnt pf_refcnt_t;




enum { PF_INOUT, PF_IN, PF_OUT, PF_FWD };
enum { PF_PASS, PF_DROP, PF_SCRUB, PF_NOSCRUB, PF_NAT, PF_NONAT,
   PF_BINAT, PF_NOBINAT, PF_RDR, PF_NORDR, PF_SYNPROXY_DROP, PF_DEFER,
   PF_MATCH, PF_DIVERT, PF_RT, PF_AFRT };
enum { PF_TRANS_RULESET, PF_TRANS_ALTQ, PF_TRANS_TABLE };
enum { PF_OP_NONE, PF_OP_IRG, PF_OP_EQ, PF_OP_NE, PF_OP_LT,
   PF_OP_LE, PF_OP_GT, PF_OP_GE, PF_OP_XRG, PF_OP_RRG };
enum { PF_CHANGE_NONE, PF_CHANGE_ADD_HEAD, PF_CHANGE_ADD_TAIL,
   PF_CHANGE_ADD_BEFORE, PF_CHANGE_ADD_AFTER,
   PF_CHANGE_REMOVE, PF_CHANGE_GET_TICKET };
enum { PF_GET_NONE, PF_GET_CLR_CNTR };
enum { PF_SK_WIRE, PF_SK_STACK, PF_SK_BOTH };





enum { PFTM_TCP_FIRST_PACKET, PFTM_TCP_OPENING, PFTM_TCP_ESTABLISHED,
   PFTM_TCP_CLOSING, PFTM_TCP_FIN_WAIT, PFTM_TCP_CLOSED,
   PFTM_UDP_FIRST_PACKET, PFTM_UDP_SINGLE, PFTM_UDP_MULTIPLE,
   PFTM_ICMP_FIRST_PACKET, PFTM_ICMP_ERROR_REPLY,
   PFTM_OTHER_FIRST_PACKET, PFTM_OTHER_SINGLE,
   PFTM_OTHER_MULTIPLE, PFTM_FRAG, PFTM_INTERVAL,
   PFTM_ADAPTIVE_START, PFTM_ADAPTIVE_END, PFTM_SRC_NODE,
   PFTM_TS_DIFF, PFTM_MAX, PFTM_PURGE, PFTM_UNLINKED };
# 112 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
enum { PF_NOPFROUTE, PF_ROUTETO, PF_DUPTO, PF_REPLYTO };
enum { PF_LIMIT_STATES, PF_LIMIT_SRC_NODES, PF_LIMIT_FRAGS,
   PF_LIMIT_TABLES, PF_LIMIT_TABLE_ENTRIES, PF_LIMIT_MAX };

enum { PF_POOL_NONE, PF_POOL_BITMASK, PF_POOL_RANDOM,
   PF_POOL_SRCHASH, PF_POOL_ROUNDROBIN, PF_POOL_LEASTSTATES };
enum { PF_ADDR_ADDRMASK, PF_ADDR_NOROUTE, PF_ADDR_DYNIFTL,
   PF_ADDR_TABLE, PF_ADDR_RTLABEL, PF_ADDR_URPFFAILED,
   PF_ADDR_RANGE, PF_ADDR_NONE };
# 138 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_addr {
 union {
  struct in_addr v4;
  struct in6_addr v6;
  u_int8_t addr8[16];
  u_int16_t addr16[8];
  u_int32_t addr32[4];
 } pfa;





};
# 161 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_addr_wrap {
 union {
  struct {
   struct pf_addr addr;
   struct pf_addr mask;
  } a;
  char ifname[16];
  char tblname[32];
  char rtlabelname[32];
  u_int32_t rtlabel;
 } v;
 union {
  struct pfi_dynaddr *dyn;
  struct pfr_ktable *tbl;
  int dyncnt;
  int tblcnt;
 } p;
 u_int8_t type;
 u_int8_t iflags;
};



struct pfi_dynaddr {
 struct { struct pfi_dynaddr *tqe_next; struct pfi_dynaddr **tqe_prev; } entry;
 struct pf_addr pfid_addr4;
 struct pf_addr pfid_mask4;
 struct pf_addr pfid_addr6;
 struct pf_addr pfid_mask6;
 struct pfr_ktable *pfid_kt;
 struct pfi_kif *pfid_kif;
 void *pfid_hook_cookie;
 int pfid_net;
 int pfid_acnt4;
 int pfid_acnt6;
 sa_family_t pfid_af;
 u_int8_t pfid_iflags;
};
# 293 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_rule_uid {
 uid_t uid[2];
 u_int8_t op;
};

struct pf_rule_gid {
 uid_t gid[2];
 u_int8_t op;
};

struct pf_rule_addr {
 struct pf_addr_wrap addr;
 u_int16_t port[2];
 u_int8_t neg;
 u_int8_t port_op;
 u_int16_t weight;
};

struct pf_poolhashkey {
 union {
  u_int8_t key8[16];
  u_int16_t key16[8];
  u_int32_t key32[4];
 } pfk;



};

struct pf_pool {
 struct pf_addr_wrap addr;
 struct pf_poolhashkey key;
 struct pf_addr counter;
 char ifname[16];
 struct pfi_kif *kif;
 int tblidx;
 u_int64_t states;
 int curweight;
 u_int16_t weight;
 u_int16_t proxy_port[2];
 u_int8_t port_op;
 u_int8_t opts;
};


typedef u_int32_t pf_osfp_t;




struct pf_osfp_entry {
 struct { struct pf_osfp_entry *sle_next; } fp_entry;
 pf_osfp_t fp_os;
 int fp_enflags;




 u_char fp_class_nm[32];
 u_char fp_version_nm[32];
 u_char fp_subtype_nm[32];
};
# 383 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
typedef u_int64_t pf_tcpopts_t;
struct pf_os_fingerprint {
 struct pf_osfp_enlist { struct pf_osfp_entry *slh_first; } fp_oses;
 pf_tcpopts_t fp_tcpopts;
 u_int16_t fp_wsize;
 u_int16_t fp_psize;
 u_int16_t fp_mss;
 u_int16_t fp_flags;
# 406 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
 u_int8_t fp_optcnt;
 u_int8_t fp_wscale;
 u_int8_t fp_ttl;
# 421 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
 struct { struct pf_os_fingerprint *sle_next; } fp_next;
};

struct pf_osfp_ioctl {
 struct pf_osfp_entry fp_os;
 pf_tcpopts_t fp_tcpopts;
 u_int16_t fp_wsize;
 u_int16_t fp_psize;
 u_int16_t fp_mss;
 u_int16_t fp_flags;
 u_int8_t fp_optcnt;
 u_int8_t fp_wscale;
 u_int8_t fp_ttl;

 int fp_getnum;
};

struct pf_rule_actions {
 int rtableid;
 u_int16_t qid;
 u_int16_t pqid;
 u_int16_t max_mss;
 u_int16_t flags;
 u_int8_t log;
 u_int8_t set_tos;
 u_int8_t min_ttl;
 u_int8_t set_prio[2];
 u_int8_t pad[3];
};

union pf_rule_ptr {
 struct pf_rule *ptr;
 u_int32_t nr;
};



struct pf_rule {
 struct pf_rule_addr src;
 struct pf_rule_addr dst;
# 471 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
 union pf_rule_ptr skip[9];

 char label[64];

 char ifname[16];
 char rcv_ifname[16];
 char qname[64];
 char pqname[64];

 char tagname[64];
 char match_tagname[64];

 char overload_tblname[32];

 struct { struct pf_rule *tqe_next; struct pf_rule **tqe_prev; } entries;
 struct pf_pool nat;
 struct pf_pool rdr;
 struct pf_pool route;

 u_int64_t evaluations;
 u_int64_t packets[2];
 u_int64_t bytes[2];

 struct pfi_kif *kif;
 struct pfi_kif *rcv_kif;
 struct pf_anchor *anchor;
 struct pfr_ktable *overload_tbl;

 pf_osfp_t os_fingerprint;

 int rtableid;
 int onrdomain;
 u_int32_t timeout[PFTM_MAX];
 u_int32_t states_cur;
 u_int32_t states_tot;
 u_int32_t max_states;
 u_int32_t src_nodes;
 u_int32_t max_src_nodes;
 u_int32_t max_src_states;
 u_int32_t max_src_conn;
 struct {
  u_int32_t limit;
  u_int32_t seconds;
 } max_src_conn_rate;
 u_int32_t qid;
 u_int32_t pqid;
 u_int32_t rt_listid;
 u_int32_t nr;
 u_int32_t prob;
 uid_t cuid;
 pid_t cpid;

 u_int16_t return_icmp;
 u_int16_t return_icmp6;
 u_int16_t max_mss;
 u_int16_t tag;
 u_int16_t match_tag;
 u_int16_t scrub_flags;

 struct pf_rule_uid uid;
 struct pf_rule_gid gid;

 u_int32_t rule_flag;
 u_int8_t action;
 u_int8_t direction;
 u_int8_t log;
 u_int8_t logif;
 u_int8_t quick;
 u_int8_t ifnot;
 u_int8_t match_tag_not;




 u_int8_t keep_state;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t type;
 u_int8_t code;
 u_int8_t flags;
 u_int8_t flagset;
 u_int8_t min_ttl;
 u_int8_t allow_opts;
 u_int8_t rt;
 u_int8_t return_ttl;
 u_int8_t tos;
 u_int8_t set_tos;
 u_int8_t anchor_relative;
 u_int8_t anchor_wildcard;



 u_int8_t flush;
 u_int8_t prio;
 u_int8_t set_prio[2];
 sa_family_t naf;
 u_int8_t rcvifnot;
 u_int8_t pad[2];

 struct {
  struct pf_addr addr;
  u_int16_t port;
 } divert, divert_packet;

 struct { struct pf_rule *sle_next; } gcle;
 struct pf_ruleset *ruleset;
 time_t exptime;
};
# 603 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_threshold {
 u_int32_t limit;


 u_int32_t seconds;
 u_int32_t count;
 u_int32_t last;
};

struct pf_rule_item {
 struct { struct pf_rule_item *sle_next; } entry;
 struct pf_rule *r;
};

struct pf_rule_slist { struct pf_rule_item *slh_first; };

enum pf_sn_types { PF_SN_NONE, PF_SN_NAT, PF_SN_RDR, PF_SN_ROUTE, PF_SN_MAX };

struct pf_src_node {
 struct { struct pf_src_node *rbe_left; struct pf_src_node *rbe_right; struct pf_src_node *rbe_parent; int rbe_color; } entry;
 struct pf_addr addr;
 struct pf_addr raddr;
 union pf_rule_ptr rule;
 struct pfi_kif *kif;
 u_int64_t bytes[2];
 u_int64_t packets[2];
 u_int32_t states;
 u_int32_t conn;
 struct pf_threshold conn_rate;
 int32_t creation;
 int32_t expire;
 sa_family_t af;
 sa_family_t naf;
 u_int8_t type;
};

struct pf_sn_item {
 struct { struct pf_sn_item *sle_next; } next;
 struct pf_src_node *sn;
};

struct pf_sn_head { struct pf_sn_item *slh_first; };



struct pf_state_scrub {
 struct timeval pfss_last;
 u_int32_t pfss_tsecr;
 u_int32_t pfss_tsval;
 u_int32_t pfss_tsval0;
 u_int16_t pfss_flags;





 u_int8_t pfss_ttl;
 u_int8_t pad;
 u_int32_t pfss_ts_mod;
};

struct pf_state_host {
 struct pf_addr addr;
 u_int16_t port;
 u_int16_t pad;
};

struct pf_state_peer {
 struct pf_state_scrub *scrub;
 u_int32_t seqlo;
 u_int32_t seqhi;
 u_int32_t seqdiff;
 u_int16_t max_win;
 u_int16_t mss;
 u_int8_t state;
 u_int8_t wscale;
 u_int8_t tcp_est;
 u_int8_t pad[1];
};

struct pf_state_queue { struct pf_state *tqh_first; struct pf_state **tqh_last; };


struct pf_state_key_cmp {
 struct pf_addr addr[2];
 u_int16_t port[2];
 u_int16_t rdomain;
 sa_family_t af;
 u_int8_t proto;
};

struct pf_state_item {
 struct { struct pf_state_item *tqe_next; struct pf_state_item **tqe_prev; } entry;
 struct pf_state *s;
};

struct pf_statelisthead { struct pf_state_item *tqh_first; struct pf_state_item **tqh_last; };

struct pf_state_key {
 struct pf_addr addr[2];
 u_int16_t port[2];
 u_int16_t rdomain;
 sa_family_t af;
 u_int8_t proto;

 struct { struct pf_state_key *rbe_left; struct pf_state_key *rbe_right; struct pf_state_key *rbe_parent; int rbe_color; } entry;
 struct pf_statelisthead states;
 struct pf_state_key *reverse;
 struct inpcb *inp;
 pf_refcnt_t refcnt;
 u_int8_t removed;
};





struct pf_state_cmp {
 u_int64_t id;
 u_int32_t creatorid;
 u_int8_t direction;
 u_int8_t pad[3];
};

struct pf_state {
 u_int64_t id;
 u_int32_t creatorid;
 u_int8_t direction;
 u_int8_t pad[3];

 struct { struct pf_state *tqe_next; struct pf_state **tqe_prev; } sync_list;
 struct { struct pf_state *tqe_next; struct pf_state **tqe_prev; } entry_list;
 struct { struct pf_state *rbe_left; struct pf_state *rbe_right; struct pf_state *rbe_parent; int rbe_color; } entry_id;
 struct pf_state_peer src;
 struct pf_state_peer dst;
 struct pf_rule_slist match_rules;
 union pf_rule_ptr rule;
 union pf_rule_ptr anchor;
 union pf_rule_ptr natrule;
 struct pf_addr rt_addr;
 struct pf_sn_head src_nodes;
 struct pf_state_key *key[2];
 struct pfi_kif *kif;
 struct pfi_kif *rt_kif;
 u_int64_t packets[2];
 u_int64_t bytes[2];
 int32_t creation;
 int32_t expire;
 int32_t pfsync_time;
 u_int16_t qid;
 u_int16_t pqid;
 u_int16_t tag;
 u_int16_t state_flags;
# 768 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
 u_int8_t log;
 u_int8_t timeout;
 u_int8_t sync_state;
 u_int8_t sync_updates;
 int rtableid[2];
 u_int8_t min_ttl;
 u_int8_t set_tos;
 u_int8_t set_prio[2];
 u_int16_t max_mss;
 u_int16_t if_index_in;
 u_int16_t if_index_out;
 u_int8_t pad2[2];
};





struct pfsync_state_scrub {
 u_int16_t pfss_flags;
 u_int8_t pfss_ttl;

 u_int8_t scrub_flag;
 u_int32_t pfss_ts_mod;
} __attribute__((__packed__));

struct pfsync_state_peer {
 struct pfsync_state_scrub scrub;
 u_int32_t seqlo;
 u_int32_t seqhi;
 u_int32_t seqdiff;
 u_int16_t max_win;
 u_int16_t mss;
 u_int8_t state;
 u_int8_t wscale;
 u_int8_t pad[6];
} __attribute__((__packed__));

struct pfsync_state_key {
 struct pf_addr addr[2];
 u_int16_t port[2];
 u_int16_t rdomain;
 sa_family_t af;
 u_int8_t pad;
};

struct pfsync_state {
 u_int64_t id;
 char ifname[16];
 struct pfsync_state_key key[2];
 struct pfsync_state_peer src;
 struct pfsync_state_peer dst;
 struct pf_addr rt_addr;
 u_int32_t rule;
 u_int32_t anchor;
 u_int32_t nat_rule;
 u_int32_t creation;
 u_int32_t expire;
 u_int32_t packets[2][2];
 u_int32_t bytes[2][2];
 u_int32_t creatorid;
 int32_t rtableid[2];
 u_int16_t max_mss;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t direction;
 u_int8_t log;
 u_int8_t pad0;
 u_int8_t timeout;
 u_int8_t sync_flags;
 u_int8_t updates;
 u_int8_t min_ttl;
 u_int8_t set_tos;
 u_int16_t state_flags;
 u_int8_t set_prio[2];
} __attribute__((__packed__));
# 898 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_rulequeue { struct pf_rule *tqh_first; struct pf_rule **tqh_last; };

struct pf_anchor;

struct pf_ruleset {
 struct {
  struct pf_rulequeue queues[2];
  struct {
   struct pf_rulequeue *ptr;
   struct pf_rule **ptr_array;
   u_int32_t rcount;
   u_int32_t ticket;
   int open;
  } active, inactive;
 } rules;
 struct pf_anchor *anchor;
 u_int32_t tticket;
 int tables;
 int topen;
};

struct pf_anchor_global { struct pf_anchor *rbh_root; };
struct pf_anchor_node { struct pf_anchor *rbh_root; };
struct pf_anchor {
 struct { struct pf_anchor *rbe_left; struct pf_anchor *rbe_right; struct pf_anchor *rbe_parent; int rbe_color; } entry_global;
 struct { struct pf_anchor *rbe_left; struct pf_anchor *rbe_right; struct pf_anchor *rbe_parent; int rbe_color; } entry_node;
 struct pf_anchor *parent;
 struct pf_anchor_node children;
 char name[64];
 char path[1024];
 struct pf_ruleset ruleset;
 int refcnt;
 int match;
};
 void pf_anchor_global_RB_INSERT_COLOR(struct pf_anchor_global *, struct pf_anchor *); void pf_anchor_global_RB_REMOVE_COLOR(struct pf_anchor_global *, struct pf_anchor *, struct pf_anchor *); struct pf_anchor *pf_anchor_global_RB_REMOVE(struct pf_anchor_global *, struct pf_anchor *); struct pf_anchor *pf_anchor_global_RB_INSERT(struct pf_anchor_global *, struct pf_anchor *); struct pf_anchor *pf_anchor_global_RB_FIND(struct pf_anchor_global *, struct pf_anchor *); struct pf_anchor *pf_anchor_global_RB_NFIND(struct pf_anchor_global *, struct pf_anchor *); struct pf_anchor *pf_anchor_global_RB_NEXT(struct pf_anchor *); struct pf_anchor *pf_anchor_global_RB_PREV(struct pf_anchor *); struct pf_anchor *pf_anchor_global_RB_MINMAX(struct pf_anchor_global *, int);
 void pf_anchor_node_RB_INSERT_COLOR(struct pf_anchor_node *, struct pf_anchor *); void pf_anchor_node_RB_REMOVE_COLOR(struct pf_anchor_node *, struct pf_anchor *, struct pf_anchor *); struct pf_anchor *pf_anchor_node_RB_REMOVE(struct pf_anchor_node *, struct pf_anchor *); struct pf_anchor *pf_anchor_node_RB_INSERT(struct pf_anchor_node *, struct pf_anchor *); struct pf_anchor *pf_anchor_node_RB_FIND(struct pf_anchor_node *, struct pf_anchor *); struct pf_anchor *pf_anchor_node_RB_NFIND(struct pf_anchor_node *, struct pf_anchor *); struct pf_anchor *pf_anchor_node_RB_NEXT(struct pf_anchor *); struct pf_anchor *pf_anchor_node_RB_PREV(struct pf_anchor *); struct pf_anchor *pf_anchor_node_RB_MINMAX(struct pf_anchor_node *, int);
# 949 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pfr_table {
 char pfrt_anchor[1024];
 char pfrt_name[32];
 u_int32_t pfrt_flags;
 u_int8_t pfrt_fback;
};

enum { PFR_FB_NONE, PFR_FB_MATCH, PFR_FB_ADDED, PFR_FB_DELETED,
 PFR_FB_CHANGED, PFR_FB_CLEARED, PFR_FB_DUPLICATE,
 PFR_FB_NOTMATCH, PFR_FB_CONFLICT, PFR_FB_NOCOUNT, PFR_FB_MAX };

struct pfr_addr {
 union {
  struct in_addr _pfra_ip4addr;
  struct in6_addr _pfra_ip6addr;
 } pfra_u;
 char pfra_ifname[16];
 u_int32_t pfra_states;
 u_int16_t pfra_weight;
 u_int8_t pfra_af;
 u_int8_t pfra_net;
 u_int8_t pfra_not;
 u_int8_t pfra_fback;
 u_int8_t pfra_type;
 u_int8_t pad[7];
};



enum { PFR_DIR_IN, PFR_DIR_OUT, PFR_DIR_MAX };
enum { PFR_OP_BLOCK, PFR_OP_MATCH, PFR_OP_PASS, PFR_OP_ADDR_MAX, PFR_OP_TABLE_MAX };


struct pfr_astats {
 struct pfr_addr pfras_a;
 u_int64_t pfras_packets[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 u_int64_t pfras_bytes[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 time_t pfras_tzero;
};

enum { PFR_REFCNT_RULE, PFR_REFCNT_ANCHOR, PFR_REFCNT_MAX };

struct pfr_tstats {
 struct pfr_table pfrts_t;
 u_int64_t pfrts_packets[PFR_DIR_MAX][PFR_OP_TABLE_MAX];
 u_int64_t pfrts_bytes[PFR_DIR_MAX][PFR_OP_TABLE_MAX];
 u_int64_t pfrts_match;
 u_int64_t pfrts_nomatch;
 time_t pfrts_tzero;
 int pfrts_cnt;
 int pfrts_refcnt[PFR_REFCNT_MAX];
};



struct pfr_kcounters {
 u_int64_t pfrkc_packets[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 u_int64_t pfrkc_bytes[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 u_int64_t states;
};






union pfsockaddr_union {
 struct sockaddr sa;
 struct sockaddr_in sin;
 struct sockaddr_in6 sin6;
};

struct pfr_kentryworkq { struct pfr_kentry *slh_first; };
struct _pfr_kentry {
 struct radix_node _pfrke_node[2];
 union pfsockaddr_union _pfrke_sa;
 struct { struct pfr_kentry *sle_next; } _pfrke_workq;
 struct pfr_kcounters *_pfrke_counters;
 time_t _pfrke_tzero;
 u_int8_t _pfrke_af;
 u_int8_t _pfrke_net;
 u_int8_t _pfrke_flags;
 u_int8_t _pfrke_type;
};




enum { PFRKE_PLAIN, PFRKE_ROUTE, PFRKE_COST, PFRKE_MAX };

struct pfr_kentry {
 union {
  struct _pfr_kentry _ke;
 } u;
};
# 1054 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pfr_kentry_route {
 union {
  struct _pfr_kentry _ke;
 } u;

 struct pfi_kif *kif;
};

struct pfr_kentry_cost {
 union {
  struct _pfr_kentry _ke;
 } u;

 struct pfi_kif *kif;


 u_int16_t weight;
};

struct pfr_kentry_all {
 union {
  struct _pfr_kentry _ke;
  struct pfr_kentry_route kr;
  struct pfr_kentry_cost kc;
 } u;
};


struct pfr_ktableworkq { struct pfr_ktable *slh_first; };
struct pfr_ktablehead { struct pfr_ktable *rbh_root; };
struct pfr_ktable {
 struct pfr_tstats pfrkt_ts;
 struct { struct pfr_ktable *rbe_left; struct pfr_ktable *rbe_right; struct pfr_ktable *rbe_parent; int rbe_color; } pfrkt_tree;
 struct { struct pfr_ktable *sle_next; } pfrkt_workq;
 struct radix_node_head *pfrkt_ip4;
 struct radix_node_head *pfrkt_ip6;
 struct pfr_ktable *pfrkt_shadow;
 struct pfr_ktable *pfrkt_root;
 struct pf_ruleset *pfrkt_rs;
 long pfrkt_larg;
 int pfrkt_nflags;
 u_int64_t pfrkt_refcntcost;
 u_int16_t pfrkt_gcdweight;
 u_int16_t pfrkt_maxweight;
};
# 1112 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_state_tree { struct pf_state_key *rbh_root; };
 void pf_state_tree_RB_INSERT_COLOR(struct pf_state_tree *, struct pf_state_key *); void pf_state_tree_RB_REMOVE_COLOR(struct pf_state_tree *, struct pf_state_key *, struct pf_state_key *); struct pf_state_key *pf_state_tree_RB_REMOVE(struct pf_state_tree *, struct pf_state_key *); struct pf_state_key *pf_state_tree_RB_INSERT(struct pf_state_tree *, struct pf_state_key *); struct pf_state_key *pf_state_tree_RB_FIND(struct pf_state_tree *, struct pf_state_key *); struct pf_state_key *pf_state_tree_RB_NFIND(struct pf_state_tree *, struct pf_state_key *); struct pf_state_key *pf_state_tree_RB_NEXT(struct pf_state_key *); struct pf_state_key *pf_state_tree_RB_PREV(struct pf_state_key *); struct pf_state_key *pf_state_tree_RB_MINMAX(struct pf_state_tree *, int);

struct pf_state_tree_ext_gwy { struct pf_state_key *rbh_root; };
 void pf_state_tree_ext_gwy_RB_INSERT_COLOR(struct pf_state_tree_ext_gwy *, struct pf_state_key *); void pf_state_tree_ext_gwy_RB_REMOVE_COLOR(struct pf_state_tree_ext_gwy *, struct pf_state_key *, struct pf_state_key *); struct pf_state_key *pf_state_tree_ext_gwy_RB_REMOVE(struct pf_state_tree_ext_gwy *, struct pf_state_key *); struct pf_state_key *pf_state_tree_ext_gwy_RB_INSERT(struct pf_state_tree_ext_gwy *, struct pf_state_key *); struct pf_state_key *pf_state_tree_ext_gwy_RB_FIND(struct pf_state_tree_ext_gwy *, struct pf_state_key *); struct pf_state_key *pf_state_tree_ext_gwy_RB_NFIND(struct pf_state_tree_ext_gwy *, struct pf_state_key *); struct pf_state_key *pf_state_tree_ext_gwy_RB_NEXT(struct pf_state_key *); struct pf_state_key *pf_state_tree_ext_gwy_RB_PREV(struct pf_state_key *); struct pf_state_key *pf_state_tree_ext_gwy_RB_MINMAX(struct pf_state_tree_ext_gwy *, int);


struct pfi_ifhead { struct pfi_kif *rbh_root; };


extern struct pf_state_tree pf_statetbl;


struct pfi_kif_cmp {
 char pfik_name[16];
};

struct ifnet;
struct ifg_group;

struct pfi_kif {
 char pfik_name[16];
 struct { struct pfi_kif *rbe_left; struct pfi_kif *rbe_right; struct pfi_kif *rbe_parent; int rbe_color; } pfik_tree;
 u_int64_t pfik_packets[2][2][2];
 u_int64_t pfik_bytes[2][2][2];
 time_t pfik_tzero;
 int pfik_flags;
 int pfik_flags_new;
 void *pfik_ah_cookie;
 struct ifnet *pfik_ifp;
 struct ifg_group *pfik_group;
 int pfik_states;
 int pfik_rules;
 int pfik_routes;
 struct { struct pfi_dynaddr *tqh_first; struct pfi_dynaddr **tqh_last; } pfik_dynaddrs;
};

enum pfi_kif_refs {
 PFI_KIF_REF_NONE,
 PFI_KIF_REF_STATE,
 PFI_KIF_REF_RULE,
 PFI_KIF_REF_ROUTE
};
# 1278 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_status {
 u_int64_t counters[17];
 u_int64_t lcounters[7];
 u_int64_t fcounters[3];
 u_int64_t scounters[3];
 u_int64_t pcounters[2][2][3];
 u_int64_t bcounters[2][2];
 u_int64_t stateid;
 time_t since;
 u_int32_t running;
 u_int32_t states;
 u_int32_t src_nodes;
 u_int32_t debug;
 u_int32_t hostid;
 u_int32_t reass;
 char ifname[16];
 u_int8_t pf_chksum[16];
};






struct pf_queue_bwspec {
 u_int absolute;
 u_int percent;
};

struct pf_queue_scspec {
 struct pf_queue_bwspec m1;
 struct pf_queue_bwspec m2;
 u_int d;
};

struct pf_queuespec {
 struct { struct pf_queuespec *tqe_next; struct pf_queuespec **tqe_prev; } entries;
 char qname[64];
 char parent[64];
 char ifname[16];
 struct pf_queue_scspec realtime;
 struct pf_queue_scspec linkshare;
 struct pf_queue_scspec upperlimit;
 struct pfi_kif *kif;
 u_int flags;
 u_int qlimit;
 u_int32_t qid;
 u_int32_t parent_qid;
};

struct priq_opts {
 int flags;
};

struct hfsc_opts {

 u_int rtsc_m1;
 u_int rtsc_d;
 u_int rtsc_m2;

 u_int lssc_m1;
 u_int lssc_d;
 u_int lssc_m2;

 u_int ulsc_m1;
 u_int ulsc_d;
 u_int ulsc_m2;
 int flags;
};

struct pf_tagname {
 struct { struct pf_tagname *tqe_next; struct pf_tagname **tqe_prev; } entries;
 char name[64];
 u_int16_t tag;
 int ref;
};

struct pf_divert {
 struct pf_addr addr;
 u_int16_t port;
 u_int16_t rdomain;
};
# 1373 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pfioc_rule {
 u_int32_t action;
 u_int32_t ticket;
 u_int32_t nr;
 char anchor[1024];
 char anchor_call[1024];
 struct pf_rule rule;
};

struct pfioc_natlook {
 struct pf_addr saddr;
 struct pf_addr daddr;
 struct pf_addr rsaddr;
 struct pf_addr rdaddr;
 u_int16_t rdomain;
 u_int16_t rrdomain;
 u_int16_t sport;
 u_int16_t dport;
 u_int16_t rsport;
 u_int16_t rdport;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t direction;
};

struct pfioc_state {
 struct pfsync_state state;
};

struct pfioc_src_node_kill {
 sa_family_t psnk_af;
 struct pf_rule_addr psnk_src;
 struct pf_rule_addr psnk_dst;
 u_int psnk_killed;
};

struct pfioc_state_kill {
 struct pf_state_cmp psk_pfcmp;
 sa_family_t psk_af;
 int psk_proto;
 struct pf_rule_addr psk_src;
 struct pf_rule_addr psk_dst;
 char psk_ifname[16];
 char psk_label[64];
 u_int psk_killed;
 u_int16_t psk_rdomain;
};

struct pfioc_states {
 int ps_len;
 union {
  caddr_t psu_buf;
  struct pfsync_state *psu_states;
 } ps_u;


};

struct pfioc_src_nodes {
 int psn_len;
 union {
  caddr_t psu_buf;
  struct pf_src_node *psu_src_nodes;
 } psn_u;


};

struct pfioc_tm {
 int timeout;
 int seconds;
};

struct pfioc_limit {
 int index;
 unsigned limit;
};

struct pfioc_ruleset {
 u_int32_t nr;
 char path[1024];
 char name[64];
};

struct pfioc_trans {
 int size;
 int esize;
 struct pfioc_trans_e {
  int type;
  char anchor[1024];
  u_int32_t ticket;
 } *array;
};

struct pfioc_queue {
 u_int32_t ticket;
 u_int nr;
 struct pf_queuespec queue;
};

struct pfioc_qstats {
 u_int32_t ticket;
 u_int32_t nr;
 struct pf_queuespec queue;
 void *buf;
 int nbytes;
};
# 1492 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pfioc_table {
 struct pfr_table pfrio_table;
 void *pfrio_buffer;
 int pfrio_esize;
 int pfrio_size;
 int pfrio_size2;
 int pfrio_nadd;
 int pfrio_ndel;
 int pfrio_nchange;
 int pfrio_flags;
 u_int32_t pfrio_ticket;
};







struct pfioc_iface {
 char pfiio_name[16];
 void *pfiio_buffer;
 int pfiio_esize;
 int pfiio_size;
 int pfiio_nzero;
 int pfiio_flags;
};
# 1587 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfvar.h"
struct pf_pdesc;

struct pf_src_tree { struct pf_src_node *rbh_root; };
 void pf_src_tree_RB_INSERT_COLOR(struct pf_src_tree *, struct pf_src_node *); void pf_src_tree_RB_REMOVE_COLOR(struct pf_src_tree *, struct pf_src_node *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_REMOVE(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_INSERT(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_FIND(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_NFIND(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_NEXT(struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_PREV(struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_MINMAX(struct pf_src_tree *, int);;
extern struct pf_src_tree tree_src_tracking;

struct pf_state_tree_id { struct pf_state *rbh_root; };
 void pf_state_tree_id_RB_INSERT_COLOR(struct pf_state_tree_id *, struct pf_state *); void pf_state_tree_id_RB_REMOVE_COLOR(struct pf_state_tree_id *, struct pf_state *, struct pf_state *); struct pf_state *pf_state_tree_id_RB_REMOVE(struct pf_state_tree_id *, struct pf_state *); struct pf_state *pf_state_tree_id_RB_INSERT(struct pf_state_tree_id *, struct pf_state *); struct pf_state *pf_state_tree_id_RB_FIND(struct pf_state_tree_id *, struct pf_state *); struct pf_state *pf_state_tree_id_RB_NFIND(struct pf_state_tree_id *, struct pf_state *); struct pf_state *pf_state_tree_id_RB_NEXT(struct pf_state *); struct pf_state *pf_state_tree_id_RB_PREV(struct pf_state *); struct pf_state *pf_state_tree_id_RB_MINMAX(struct pf_state_tree_id *, int);;

extern struct pf_state_tree_id tree_id;
extern struct pf_state_queue state_list;

struct pf_queuehead { struct pf_queuespec *tqh_first; struct pf_queuespec **tqh_last; };
extern struct pf_queuehead pf_queues[2];
extern struct pf_queuehead *pf_queues_active, *pf_queues_inactive;

extern u_int32_t ticket_pabuf;
extern struct pool pf_src_tree_pl, pf_sn_item_pl, pf_rule_pl;
extern struct pool pf_state_pl, pf_state_key_pl, pf_state_item_pl,
        pf_rule_item_pl, pf_queue_pl;
extern struct pool pf_state_scrub_pl;
extern struct ifnet *sync_ifp;
extern struct pf_rule pf_default_rule;

extern int pf_tbladdr_setup(struct pf_ruleset *,
        struct pf_addr_wrap *);
extern void pf_tbladdr_remove(struct pf_addr_wrap *);
extern void pf_tbladdr_copyout(struct pf_addr_wrap *);
extern void pf_calc_skip_steps(struct pf_rulequeue *);
extern void pf_purge_thread(void *);
extern void pf_purge_expired_src_nodes(int);
extern void pf_purge_expired_states(u_int32_t);
extern void pf_purge_expired_rules(int);
extern void pf_remove_state(struct pf_state *);
extern void pf_remove_divert_state(struct pf_state_key *);
extern void pf_free_state(struct pf_state *);
extern int pf_state_insert(struct pfi_kif *,
        struct pf_state_key **,
        struct pf_state_key **,
        struct pf_state *);
int pf_insert_src_node(struct pf_src_node **,
        struct pf_rule *, enum pf_sn_types,
        sa_family_t, struct pf_addr *,
        struct pf_addr *);
void pf_remove_src_node(struct pf_src_node *);
struct pf_src_node *pf_get_src_node(struct pf_state *,
        enum pf_sn_types);
void pf_src_tree_remove_state(struct pf_state *);
void pf_state_rm_src_node(struct pf_state *,
        struct pf_src_node *);

extern struct pf_state *pf_find_state_byid(struct pf_state_cmp *);
extern struct pf_state *pf_find_state_all(struct pf_state_key_cmp *,
        u_int, int *);
extern void pf_state_export(struct pfsync_state *,
        struct pf_state *);
extern void pf_print_state(struct pf_state *);
extern void pf_print_flags(u_int8_t);
extern void pf_addrcpy(struct pf_addr *, struct pf_addr *,
        sa_family_t);
void pf_rm_rule(struct pf_rulequeue *,
        struct pf_rule *);
void pf_purge_rule(struct pf_rule *);
struct pf_divert *pf_find_divert(struct mbuf *);
int pf_setup_pdesc(struct pf_pdesc *, sa_family_t,
        int, struct pfi_kif *, struct mbuf *,
        u_short *);

int pf_test(sa_family_t, int, struct ifnet *, struct mbuf **);

void pf_poolmask(struct pf_addr *, struct pf_addr*,
     struct pf_addr *, struct pf_addr *, sa_family_t);
void pf_addr_inc(struct pf_addr *, sa_family_t);

void *pf_pull_hdr(struct mbuf *, int, void *, int, u_short *, u_short *,
     sa_family_t);



int pf_patch_8(struct pf_pdesc *, u_int8_t *, u_int8_t, _Bool);
int pf_patch_16(struct pf_pdesc *, u_int16_t *, u_int16_t);
int pf_patch_16_unaligned(struct pf_pdesc *, void *, u_int16_t, _Bool);
int pf_patch_32(struct pf_pdesc *, u_int32_t *, u_int32_t);
int pf_patch_32_unaligned(struct pf_pdesc *, void *, u_int32_t, _Bool);
int pflog_packet(struct pf_pdesc *, u_int8_t, struct pf_rule *,
     struct pf_rule *, struct pf_ruleset *, struct pf_rule *);
void pf_send_deferred_syn(struct pf_state *);
int pf_match_addr(u_int8_t, struct pf_addr *, struct pf_addr *,
     struct pf_addr *, sa_family_t);
int pf_match_addr_range(struct pf_addr *, struct pf_addr *,
     struct pf_addr *, sa_family_t);
int pf_match(u_int8_t, u_int32_t, u_int32_t, u_int32_t);
int pf_match_port(u_int8_t, u_int16_t, u_int16_t, u_int16_t);
int pf_match_uid(u_int8_t, uid_t, uid_t, uid_t);
int pf_match_gid(u_int8_t, gid_t, gid_t, gid_t);

int pf_refragment6(struct mbuf **, struct m_tag *mtag,
     struct sockaddr_in6 *, struct ifnet *);
void pf_normalize_init(void);
int pf_normalize_ip(struct pf_pdesc *, u_short *);
int pf_normalize_ip6(struct pf_pdesc *, u_short *);
int pf_normalize_tcp(struct pf_pdesc *);
void pf_normalize_tcp_cleanup(struct pf_state *);
int pf_normalize_tcp_init(struct pf_pdesc *, struct pf_state_peer *);
int pf_normalize_tcp_stateful(struct pf_pdesc *, u_short *,
     struct pf_state *, struct pf_state_peer *, struct pf_state_peer *,
     int *);
int pf_normalize_mss(struct pf_pdesc *, u_int16_t);
void pf_scrub(struct mbuf *, u_int16_t, sa_family_t, u_int8_t, u_int8_t);
int32_t pf_state_expires(const struct pf_state *);
void pf_purge_expired_fragments(void);
int pf_routable(struct pf_addr *addr, sa_family_t af, struct pfi_kif *,
     int);
int pf_rtlabel_match(struct pf_addr *, sa_family_t, struct pf_addr_wrap *,
     int);
int pf_socket_lookup(struct pf_pdesc *);
struct pf_state_key *pf_alloc_state_key(int);
int pf_ouraddr(struct mbuf *);
void pf_pkt_addr_changed(struct mbuf *);
struct inpcb *pf_inp_lookup(struct mbuf *);
void pf_inp_link(struct mbuf *, struct inpcb *);
void pf_inp_unlink(struct inpcb *);
int pf_state_key_attach(struct pf_state_key *, struct pf_state *, int);
int pf_translate(struct pf_pdesc *, struct pf_addr *, u_int16_t,
     struct pf_addr *, u_int16_t, u_int16_t, int);
int pf_translate_af(struct pf_pdesc *);
void pf_route(struct pf_pdesc *, struct pf_rule *, struct pf_state *);
void pf_route6(struct pf_pdesc *, struct pf_rule *, struct pf_state *);

void pfr_initialize(void);
int pfr_match_addr(struct pfr_ktable *, struct pf_addr *, sa_family_t);
void pfr_update_stats(struct pfr_ktable *, struct pf_addr *,
     struct pf_pdesc *, int, int);
int pfr_pool_get(struct pf_pool *, struct pf_addr **,
     struct pf_addr **, sa_family_t);
int pfr_states_increase(struct pfr_ktable *, struct pf_addr *, int);
int pfr_states_decrease(struct pfr_ktable *, struct pf_addr *, int);
struct pfr_kentry *
 pfr_kentry_byaddr(struct pfr_ktable *, struct pf_addr *, sa_family_t,
     int);
void pfr_dynaddr_update(struct pfr_ktable *, struct pfi_dynaddr *);
struct pfr_ktable *
 pfr_attach_table(struct pf_ruleset *, char *, int);
void pfr_detach_table(struct pfr_ktable *);
int pfr_clr_tables(struct pfr_table *, int *, int);
int pfr_add_tables(struct pfr_table *, int, int *, int);
int pfr_del_tables(struct pfr_table *, int, int *, int);
int pfr_get_tables(struct pfr_table *, struct pfr_table *, int *, int);
int pfr_get_tstats(struct pfr_table *, struct pfr_tstats *, int *, int);
int pfr_clr_tstats(struct pfr_table *, int, int *, int);
int pfr_set_tflags(struct pfr_table *, int, int, int, int *, int *, int);
int pfr_clr_addrs(struct pfr_table *, int *, int);
int pfr_insert_kentry(struct pfr_ktable *, struct pfr_addr *, time_t);
int pfr_add_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_del_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_set_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int *, int *, int *, int, u_int32_t);
int pfr_get_addrs(struct pfr_table *, struct pfr_addr *, int *, int);
int pfr_get_astats(struct pfr_table *, struct pfr_astats *, int *, int);
int pfr_clr_astats(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_tst_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_ina_begin(struct pfr_table *, u_int32_t *, int *, int);
int pfr_ina_rollback(struct pfr_table *, u_int32_t, int *, int);
int pfr_ina_commit(struct pfr_table *, u_int32_t, int *, int *, int);
int pfr_ina_define(struct pfr_table *, struct pfr_addr *, int, int *,
     int *, u_int32_t, int);

extern struct pfi_kif *pfi_all;

void pfi_initialize(void);
struct pfi_kif *pfi_kif_find(const char *);
struct pfi_kif *pfi_kif_get(const char *);
void pfi_kif_ref(struct pfi_kif *, enum pfi_kif_refs);
void pfi_kif_unref(struct pfi_kif *, enum pfi_kif_refs);
int pfi_kif_match(struct pfi_kif *, struct pfi_kif *);
void pfi_attach_ifnet(struct ifnet *);
void pfi_detach_ifnet(struct ifnet *);
void pfi_attach_ifgroup(struct ifg_group *);
void pfi_detach_ifgroup(struct ifg_group *);
void pfi_group_change(const char *);
int pfi_match_addr(struct pfi_dynaddr *, struct pf_addr *,
      sa_family_t);
int pfi_dynaddr_setup(struct pf_addr_wrap *, sa_family_t);
void pfi_dynaddr_remove(struct pf_addr_wrap *);
void pfi_dynaddr_copyout(struct pf_addr_wrap *);
void pfi_update_status(const char *, struct pf_status *);
int pfi_get_ifaces(const char *, struct pfi_kif *, int *);
int pfi_set_flags(const char *, int);
int pfi_clear_flags(const char *, int);
void pfi_xcommit(void);

int pf_match_tag(struct mbuf *, struct pf_rule *, int *);
u_int16_t pf_tagname2tag(char *, int);
void pf_tag2tagname(u_int16_t, char *);
void pf_tag_ref(u_int16_t);
void pf_tag_unref(u_int16_t);
void pf_tag_packet(struct mbuf *, int, int);
int pf_addr_compare(struct pf_addr *, struct pf_addr *,
      sa_family_t);

extern struct pf_status pf_status;
extern struct pool pf_frent_pl, pf_frag_pl;
extern struct rwlock pf_consistency_lock;

struct pf_pool_limit {
 void *pp;
 unsigned limit;
 unsigned limit_new;
};
extern struct pf_pool_limit pf_pool_limits[PF_LIMIT_MAX];



extern struct pf_anchor_global pf_anchors;
extern struct pf_anchor pf_main_anchor;


struct tcphdr;


void pf_init_ruleset(struct pf_ruleset *);
int pf_anchor_setup(struct pf_rule *,
       const struct pf_ruleset *, const char *);
int pf_anchor_copyout(const struct pf_ruleset *,
       const struct pf_rule *, struct pfioc_rule *);
void pf_anchor_remove(struct pf_rule *);
void pf_remove_if_empty_ruleset(struct pf_ruleset *);
struct pf_anchor *pf_find_anchor(const char *);
struct pf_ruleset *pf_find_ruleset(const char *);
struct pf_ruleset *pf_find_or_create_ruleset(const char *);
void pf_rs_initialize(void);


int pf_anchor_copyout(const struct pf_ruleset *,
       const struct pf_rule *, struct pfioc_rule *);
void pf_anchor_remove(struct pf_rule *);




int pf_osfp_add(struct pf_osfp_ioctl *);

struct pf_osfp_enlist *
 pf_osfp_fingerprint(struct pf_pdesc *);

struct pf_osfp_enlist *
 pf_osfp_fingerprint_hdr(const struct ip *, const struct ip6_hdr *,
     const struct tcphdr *);
void pf_osfp_flush(void);
int pf_osfp_get(struct pf_osfp_ioctl *);
void pf_osfp_initialize(void);
int pf_osfp_match(struct pf_osfp_enlist *, pf_osfp_t);
struct pf_os_fingerprint *
 pf_osfp_validate(void);


void pf_print_host(struct pf_addr *, u_int16_t, sa_family_t);

int pf_get_transaddr(struct pf_rule *, struct pf_pdesc *,
       struct pf_src_node **, struct pf_rule **);

int pf_map_addr(sa_family_t, struct pf_rule *,
       struct pf_addr *, struct pf_addr *,
       struct pf_addr *, struct pf_src_node **,
       struct pf_pool *, enum pf_sn_types);

int pf_postprocess_addr(struct pf_state *);

struct pf_state_key *pf_state_key_ref(struct pf_state_key *);
void pf_state_key_unref(struct pf_state_key *);
int pf_state_key_isvalid(struct pf_state_key *);
void pf_pkt_unlink_state_key(struct mbuf *);
void pf_pkt_state_key_ref(struct mbuf *);

struct mbuf * pf_build_tcp(const struct pf_rule *, sa_family_t,
       const struct pf_addr *, const struct pf_addr *,
       u_int16_t, u_int16_t, u_int32_t, u_int32_t,
       u_int8_t, u_int16_t, u_int16_t, u_int8_t, int,
       u_int16_t, u_int);
void pf_send_tcp(const struct pf_rule *, sa_family_t,
       const struct pf_addr *, const struct pf_addr *,
       u_int16_t, u_int16_t, u_int32_t, u_int32_t,
       u_int8_t, u_int16_t, u_int16_t, u_int8_t, int,
       u_int16_t, u_int);
# 85 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c" 2
# 129 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/pfkeyv2_parsemessage.c"
uint64_t sadb_exts_allowed_in[16 +1] =
{

 ~0,

 (1LL << 5) | (1LL << 6) | (1LL << 16),

 (1LL << 1) | ((1LL << 2) | (1LL << 3) | (1LL << 4)) | ((1LL << 5) | (1LL << 6)) | ((1LL << 8) | (1LL << 9)) | ((1LL << 10) | (1LL << 11)) | ((1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20)) | (1LL << 31) | (1LL << 33) | (1LL << 34),

 (1LL << 1) | ((1LL << 2) | (1LL << 3) | (1LL << 4)) | ((1LL << 5) | (1LL << 6)) | ((1LL << 8) | (1LL << 9)) | ((1LL << 10) | (1LL << 11)) | ((1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20)) | (1LL << 31) | (1LL << 32) | (1LL << 33) | (1LL << 34),

 (1LL << 1) | (1LL << 5) | (1LL << 6),

 (1LL << 1) | (1LL << 5) | (1LL << 6),

 (1LL << 5) | (1LL << 6) | ((1LL << 10) | (1LL << 11)) | (1LL << 13),

 0,

 (1LL << 1) | (1LL << 5) | (1LL << 6),

 0,

 0,

 0,

 (1LL << 5) | (1LL << 6) | (1LL << 10) | (1LL << 11) | ((1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20)),

 ((1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20)),

 (1LL << 1) | (1LL << 23) | (1LL << 24) | (1LL << 6) | (1LL << 19),

 (1LL << 25),
};

uint64_t sadb_exts_required_in[16 +1] =
{

 0,

 (1LL << 5) | (1LL << 6) | (1LL << 16),

 (1LL << 1) | (1LL << 5) | (1LL << 6),

 (1LL << 1) | (1LL << 6),

 (1LL << 1) | (1LL << 6),

 (1LL << 1) | (1LL << 6),

 0,

 0,

 (1LL << 1) | (1LL << 5) | (1LL << 6),

 0,

 0,

 0,

 (1LL << 17) | (1LL << 18) | (1LL << 21) | (1LL << 22) | (1LL << 20),

 (1LL << 17) | (1LL << 18) | (1LL << 21) | (1LL << 22) | (1LL << 20),

 (1LL << 1) | (1LL << 23) | (1LL << 24) | (1LL << 6) | (1LL << 19),

 (1LL << 25),
};

uint64_t sadb_exts_allowed_out[16 +1] =
{

 ~0,

 (1LL << 1) | (1LL << 5) | (1LL << 6),

 (1LL << 1) | ((1LL << 2) | (1LL << 3) | (1LL << 4)) | ((1LL << 5) | (1LL << 6)) | ((1LL << 10) | (1LL << 11)) | ((1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20)) | (1LL << 31) | (1LL << 33) | (1LL << 34),

 (1LL << 1) | ((1LL << 2) | (1LL << 3) | (1LL << 4)) | ((1LL << 5) | (1LL << 6)) | ((1LL << 10) | (1LL << 11)) | ((1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20)) | (1LL << 31) | (1LL << 33) | (1LL << 34),

 (1LL << 1) | (1LL << 5) | (1LL << 6),

 (1LL << 1) | ((1LL << 2) | (1LL << 3) | (1LL << 4)) | ((1LL << 5) | (1LL << 6)) | ((1LL << 8) | (1LL << 9)) | ((1LL << 10) | (1LL << 11)) | (1LL << 31) | (1LL << 32) | (1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 20) | (1LL << 21) | (1LL << 22) | (1LL << 33) | (1LL << 34),

 (1LL << 5) | (1LL << 6) | ((1LL << 10) | (1LL << 11)) | (1LL << 13),

 (1LL << 14) | (1LL << 15) | (1LL << 30),

 (1LL << 1) | ((1LL << 2) | (1LL << 3) | (1LL << 4)) | ((1LL << 5) | (1LL << 6)),

 0,

 (1LL << 1) | ((1LL << 2) | (1LL << 3) | (1LL << 4)) | ((1LL << 5) | (1LL << 6)) | ((1LL << 10) | (1LL << 11)),

 0,

 (1LL << 5) | (1LL << 6) | (1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20) | (1LL << 10) | (1LL << 11),

 (1LL << 17) | (1LL << 18) | (1LL << 19) | (1LL << 21) | (1LL << 22) | (1LL << 20),

 (1LL << 1) | (1LL << 23) | (1LL << 24) | (1LL << 6) | (1LL << 19),

 (1LL << 21) | (1LL << 22) | (1LL << 17) | (1LL << 18) | (1LL << 20) | (1LL << 25),
};

uint64_t sadb_exts_required_out[16 +1] =
{

 0,

 (1LL << 1) | (1LL << 6),

 (1LL << 1) | (1LL << 6),

 (1LL << 1) | (1LL << 6),

 (1LL << 1) | (1LL << 6),

 (1LL << 1) | (1LL << 2) | (1LL << 6),

 0,

 (1LL << 14) | (1LL << 15) | (1LL << 30),

 (1LL << 1) | (1LL << 6),

 0,

 0,

 0,

 (1LL << 17) | (1LL << 18) | (1LL << 21) | (1LL << 22) | (1LL << 20),

 (1LL << 17) | (1LL << 18) | (1LL << 21) | (1LL << 22) | (1LL << 20),

 (1LL << 1) | (1LL << 23) | (1LL << 24) | (1LL << 6) | (1LL << 19),

 (1LL << 21) | (1LL << 22) | (1LL << 17) | (1LL << 18) | (1LL << 20),
};

int pfkeyv2_parsemessage(void *, int, void **);



int
pfkeyv2_parsemessage(void *p, int len, void **headers)
{
 struct sadb_ext *sadb_ext;
 int i, left = len;
 uint64_t allow, seen = 1;
 struct sadb_msg *sadb_msg = (struct sadb_msg *) p;

 bzero(headers, (34 + 1) * sizeof(void *));

 if (left < sizeof(struct sadb_msg)) {
  ;
  return (22);
 }

 headers[0] = p;

 if (sadb_msg->sadb_msg_len * sizeof(uint64_t) != left) {
  ;
  return (22);
 }

 p += sizeof(struct sadb_msg);
 left -= sizeof(struct sadb_msg);

 if (sadb_msg->sadb_msg_reserved) {
  ;

  return (22);
 }

 if (sadb_msg->sadb_msg_type > 16) {
  ;

  return (22);
 }

 if (!sadb_msg->sadb_msg_type) {
  ;
  return (22);
 }

 if (sadb_msg->sadb_msg_pid != (&cpu_info_primary)->ci_curproc->p_p->ps_pid) {
  ;
  return (22);
 }

 if (sadb_msg->sadb_msg_errno) {
  if (left) {
   ;
   return (22);
  }
  return (0);
 }

 if (sadb_msg->sadb_msg_type == 11) {
  ;
  return (0);
 }

 allow = sadb_exts_allowed_in[sadb_msg->sadb_msg_type];

 while (left > 0) {
  sadb_ext = (struct sadb_ext *)p;
  if (left < sizeof(struct sadb_ext)) {
   ;

   return (22);
  }

  i = sadb_ext->sadb_ext_len * sizeof(uint64_t);
  if (left < i) {
   ;

   return (22);
  }

  if (sadb_ext->sadb_ext_type > 34) {
   ;

   return (22);
  }

  if (!sadb_ext->sadb_ext_type) {
   ;

   return (22);
  }

  if (!(allow & (1LL << sadb_ext->sadb_ext_type))) {
   ;


   return (22);
  }

  if (headers[sadb_ext->sadb_ext_type]) {
   ;

   return (22);
  }

  seen |= (1LL << sadb_ext->sadb_ext_type);

  switch (sadb_ext->sadb_ext_type) {
  case 1:
  case 23:
  {
   struct sadb_sa *sadb_sa = (struct sadb_sa *)p;

   if (i != sizeof(struct sadb_sa)) {
    ;


    return (22);
   }

   if (sadb_sa->sadb_sa_state > 3) {
    ;



    return (22);
   }

   if (sadb_sa->sadb_sa_state == 3) {
    ;


    return (22);
   }

   if (sadb_sa->sadb_sa_encrypt > 22) {
    ;



    return (22);
   }

   if (sadb_sa->sadb_sa_auth > 12) {
    ;




    return (22);
   }

   if (sadb_sa->sadb_sa_replay > 64) {
    ;



    return (22);
   }
  }
  break;
  case 19:
  case 20:
   if (i != sizeof(struct sadb_protocol)) {
    ;


    return (22);
   }
   break;
  case 25:
   if (i != sizeof(struct sadb_x_policy)) {
    ;

    return (22);
   }
   break;
  case 2:
  case 3:
  case 4:
  case 32:
   if (i != sizeof(struct sadb_lifetime)) {
    ;


    return (22);
   }
   break;
  case 5:
  case 6:
  case 17:
  case 18:
  case 21:
  case 22:
  case 24:
  {
   struct sadb_address *sadb_address =
       (struct sadb_address *)p;
   struct sockaddr *sa = (struct sockaddr *)(p +
       sizeof(struct sadb_address));

   if (i < sizeof(struct sadb_address) +
       sizeof(struct sockaddr)) {
    ;


    return (22);
   }

   if (sadb_address->sadb_address_reserved) {
    ;


    return (22);
   }
   if (sa->sa_len &&
       (i != sizeof(struct sadb_address) +
       (((sa->sa_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)))) {
    ;


    return (22);
   }

   switch (sa->sa_family) {
   case 2:
    if (sizeof(struct sadb_address) +
        (((sizeof(struct sockaddr_in)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) != i) {
     ;



     return (22);
    }

    if (sa->sa_len != sizeof(struct sockaddr_in)) {
     ;



     return (22);
    }


    switch (sadb_ext->sadb_ext_type)
    {
    case 17:
    case 18:
    case 21:
    case 22:
     break;

    default:
     if (((struct sockaddr_in *)sa)->sin_port) {
      ;




      return (22);
     }
     break;
    }

    {
     char zero[sizeof(((struct sockaddr_in *)sa)->sin_zero)];
     bzero(zero, sizeof(zero));

     if (bcmp(&((struct sockaddr_in *)sa)->sin_zero, zero, sizeof(zero))) {
      ;





      return (22);
     }
    }
    break;

   case 24:
    if (i != sizeof(struct sadb_address) +
        (((sizeof(struct sockaddr_in6)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1))) {
     ;



     return (22);
    }

    if (sa->sa_len !=
        sizeof(struct sockaddr_in6)) {
     ;



     return (22);
    }

    if (((struct sockaddr_in6 *)sa)->sin6_flowinfo) {
     ;




     return (22);
    }


    switch (sadb_ext->sadb_ext_type)
    {
    case 17:
    case 18:
    case 21:
    case 22:
     break;

    default:
     if (((struct sockaddr_in6 *)sa)->sin6_port) {
      ;




      return (22);
     }
     break;
    }
    break;

   default:
    if (sadb_msg->sadb_msg_satype ==
        8 &&
        sa->sa_family == 0)
     break;
    ;



    return (22);
   }
  }
  break;
  case 8:
  case 9:
  {
   struct sadb_key *sadb_key = (struct sadb_key *)p;

   if (i < sizeof(struct sadb_key)) {
    ;


    return (22);
   }

   if (!sadb_key->sadb_key_bits) {
    ;


    return (22);
   }

   if (((sadb_key->sadb_key_bits + 63) / 64) * sizeof(uint64_t) != i - sizeof(struct sadb_key)) {
    ;


    return (22);
   }

   if (sadb_key->sadb_key_reserved) {
    ;


    return (22);
   }
  }
  break;
  case 10:
  case 11:
  {
   struct sadb_ident *sadb_ident = (struct sadb_ident *)p;

   if (i < sizeof(struct sadb_ident)) {
    ;


    return (22);
   }

   if (sadb_ident->sadb_ident_type > 3) {
    ;




    return (22);
   }

   if (sadb_ident->sadb_ident_reserved) {
    ;


    return (22);
   }

   if (i > sizeof(struct sadb_ident)) {
    char *c =
        (char *)(p + sizeof(struct sadb_ident));
    int j;

    if (*(char *)(p + i - 1)) {
     ;



     return (22);
    }

    j = (((strlen(c) + 1) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) +
        sizeof(struct sadb_ident);

    if (i != j) {
     ;




     return (22);
    }
   }
  }
  break;
  case 12:
  {
   struct sadb_sens *sadb_sens = (struct sadb_sens *)p;

   if (i < sizeof(struct sadb_sens)) {
    ;


    return (22);
   }

   if (i != (sadb_sens->sadb_sens_sens_len +
       sadb_sens->sadb_sens_integ_len) *
       sizeof(uint64_t) +
       sizeof(struct sadb_sens)) {
    ;


    return (22);
   }
  }
  break;
  case 13:
  {
   struct sadb_prop *sadb_prop = (struct sadb_prop *)p;

   if (i < sizeof(struct sadb_prop)) {
    ;

    return (22);
   }

   if (sadb_prop->sadb_prop_reserved) {
    ;

    return (22);
   }

   if ((i - sizeof(struct sadb_prop)) %
       sizeof(struct sadb_comb)) {
    ;

    return (22);
   }

   {
    struct sadb_comb *sadb_comb =
        (struct sadb_comb *)(p +
     sizeof(struct sadb_prop));
    int j;

    for (j = 0;
        j < (i - sizeof(struct sadb_prop))/
        sizeof(struct sadb_comb);
        j++) {
     if (sadb_comb->sadb_comb_auth >
         12) {
      ;




      return (22);
     }

     if (sadb_comb->sadb_comb_encrypt >
         22) {
      ;




      return (22);
     }

     if (sadb_comb->sadb_comb_reserved) {
      ;


      return (22);
     }
    }
   }
  }
  break;
  case 14:
  case 15:
  case 30:
  {
   struct sadb_supported *sadb_supported =
       (struct sadb_supported *)p;
   int j;

   if (i < sizeof(struct sadb_supported)) {
    ;


    return (22);
   }

   if (sadb_supported->sadb_supported_reserved) {
    ;


    return (22);
   }

   {
    struct sadb_alg *sadb_alg =
        (struct sadb_alg *)(p +
     sizeof(struct sadb_supported));
    int max_alg;

    max_alg = sadb_ext->sadb_ext_type ==
        14 ?
        12 : 15 ?
        22 : 3;

    for (j = 0;
        j < sadb_supported->sadb_supported_len - 1;
        j++) {
     if (sadb_alg->sadb_alg_id > max_alg) {
      ;





      return (22);
     }

     if (sadb_alg->sadb_alg_reserved) {
      ;





      return (22);
     }

     sadb_alg++;
    }
   }
  }
  break;
  case 16:
  {
   struct sadb_spirange *sadb_spirange =
       (struct sadb_spirange *)p;

   if (i != sizeof(struct sadb_spirange)) {
    ;

    return (22);
   }

   if (sadb_spirange->sadb_spirange_min >
       sadb_spirange->sadb_spirange_max) {
    ;

    return (22);
   }
  }
  break;
  case 31:
   if (i != sizeof(struct sadb_x_udpencap)) {
    ;

    return (22);
   }
   break;

  case 33:
   if (i < sizeof(struct sadb_x_tag)) {
    ;

    return (22);
   }
   if (i > (sizeof(struct sadb_x_tag) +
       64)) {
    ;

    return (22);
   }
   break;
  case 34:
   if (i < sizeof(struct sadb_x_tap)) {
    ;

    return (22);
   }
   if (i > sizeof(struct sadb_x_tap)) {
    ;

    return (22);
   }
   break;

  default:
   ;


   return (22);
  }

  headers[sadb_ext->sadb_ext_type] = p;
  p += i;
  left -= i;
 }

 if (left) {
  ;
  return (22);
 }

 {
  uint64_t required;

  required = sadb_exts_required_in[sadb_msg->sadb_msg_type];

  if ((seen & required) != required) {
   ;

   return (22);
  }
 }

 switch (((struct sadb_msg *)headers[0])->sadb_msg_type) {
 case 2:
  if (((struct sadb_sa *)headers[1])->sadb_sa_state !=
      1) {
   ;

   return (22);
  }
  break;
 case 3:
  if (((struct sadb_sa *)headers[1])->sadb_sa_state !=
      1) {
   ;

   return (22);
  }
  break;
 }

 return (0);
}
