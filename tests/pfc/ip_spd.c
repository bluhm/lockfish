# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c"
# 23 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c"
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
# 24 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
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
# 25 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
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
# 26 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
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
# 27 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/kernel.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/kernel.h"
extern long hostid;
extern char hostname[256];
extern int hostnamelen;
extern char domainname[256];
extern int domainnamelen;


extern struct timespec boottime;
extern struct timezone tz;

extern int tick;
extern int tickfix;
extern int tickfixinterval;
extern int tickadj;
extern int ticks;
extern int hz;
extern int stathz;
extern int profhz;
extern int lbolt;
extern int tickdelta;
extern long timedelta;

extern int64_t adjtimedelta;
extern struct bintime naptime;
# 28 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 1
# 35 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
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
# 36 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/task.h" 1
# 24 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/task.h"
struct taskq;

struct task {
 struct { struct task *tqe_next; struct task **tqe_prev; } t_entry;
 void (*t_func)(void *);
 void *t_arg;
 unsigned int t_flags;
};

struct task_list { struct task *tqh_first; struct task **tqh_last; };







extern struct taskq *const systq;
extern struct taskq *const systqmp;

struct taskq *taskq_create(const char *, unsigned int, int, unsigned int);
void taskq_destroy(struct taskq *);

void task_set(struct task *, void (*)(void *), void *);
int task_add(struct taskq *, struct task *);
int task_del(struct taskq *, struct task *);
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 2
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
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h" 2






struct soqhead { struct socket *tqh_first; struct socket **tqh_last; };







struct socket {
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 void *so_pcb;
 struct protosw *so_proto;
# 71 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
 struct socket *so_head;
 struct soqhead *so_onq;
 struct soqhead so_q0;
 struct soqhead so_q;
 struct { struct socket *tqe_next; struct socket **tqe_prev; } so_qe;
 short so_q0len;
 short so_qlen;
 short so_qlimit;
 short so_timeo;
 u_short so_error;
 pid_t so_pgid;
 uid_t so_siguid;
 uid_t so_sigeuid;
 u_long so_oobmark;



 struct sosplice {
  struct socket *ssp_socket;
  struct socket *ssp_soback;
  off_t ssp_len;
  off_t ssp_max;
  struct timeval ssp_idletv;
  struct timeout ssp_idleto;
  struct task ssp_task;
 } *so_sp;



 struct sockbuf {
  u_long sb_cc;
  u_long sb_datacc;
  u_long sb_hiwat;
  u_long sb_wat;
  u_long sb_mbcnt;
  u_long sb_mbmax;
  long sb_lowat;
  struct mbuf *sb_mb;
  struct mbuf *sb_mbtail;
  struct mbuf *sb_lastrecord;

  struct selinfo sb_sel;
  int sb_flagsintr;
  short sb_flags;
  u_short sb_timeo;
 } so_rcv, so_snd;
# 127 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
 void (*so_upcall)(struct socket *so, caddr_t arg, int waitf);
 caddr_t so_upcallarg;
 uid_t so_euid, so_ruid;
 gid_t so_egid, so_rgid;
 pid_t so_cpid;
};
# 218 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
struct rwlock;






int sblock(struct sockbuf *, int, struct rwlock *);


void sbunlock(struct sockbuf *);
# 237 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/socketvar.h"
extern u_long sb_max;

extern struct pool socket_pool;

struct mbuf;
struct sockaddr;
struct proc;
struct msghdr;
struct stat;
struct knote;




int soo_read(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_write(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_ioctl(struct file *fp, u_long cmd, caddr_t data,
     struct proc *p);
int soo_poll(struct file *fp, int events, struct proc *p);
int soo_kqfilter(struct file *fp, struct knote *kn);
int soo_close(struct file *fp, struct proc *p);
int soo_stat(struct file *, struct stat *, struct proc *);
int uipc_usrreq(struct socket *, int , struct mbuf *,
    struct mbuf *, struct mbuf *, struct proc *);
void sbappend(struct sockbuf *sb, struct mbuf *m);
void sbappendstream(struct sockbuf *sb, struct mbuf *m);
int sbappendaddr(struct sockbuf *sb, struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendcontrol(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
void sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
void sbcompress(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
struct mbuf *
 sbcreatecontrol(caddr_t p, int size, int type, int level);
void sbdrop(struct sockbuf *sb, int len);
void sbdroprecord(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
void sbinsertoob(struct sockbuf *sb, struct mbuf *m0);
void sbrelease(struct sockbuf *sb);
int sbcheckreserve(u_long cnt, u_long defcnt);
int sbchecklowmem(void);
int sbreserve(struct sockbuf *sb, u_long cc);
int sbwait(struct sockbuf *sb);
int sb_lock(struct sockbuf *sb);
void soinit(void);
int soabort(struct socket *so);
int soaccept(struct socket *so, struct mbuf *nam);
int sobind(struct socket *so, struct mbuf *nam, struct proc *p);
void socantrcvmore(struct socket *so);
void socantsendmore(struct socket *so);
int soclose(struct socket *so);
int soconnect(struct socket *so, struct mbuf *nam);
int soconnect2(struct socket *so1, struct socket *so2);
int socreate(int dom, struct socket **aso, int type, int proto);
int sodisconnect(struct socket *so);
void sofree(struct socket *so);
int sogetopt(struct socket *so, int level, int optname,
     struct mbuf **mp);
void sohasoutofband(struct socket *so);
void soisconnected(struct socket *so);
void soisconnecting(struct socket *so);
void soisdisconnected(struct socket *so);
void soisdisconnecting(struct socket *so);
int solisten(struct socket *so, int backlog);
struct socket *sonewconn(struct socket *head, int connstatus);
void soqinsque(struct socket *head, struct socket *so, int q);
int soqremque(struct socket *so, int q);
int soreceive(struct socket *so, struct mbuf **paddr, struct uio *uio,
     struct mbuf **mp0, struct mbuf **controlp, int *flagsp,
     socklen_t controllen);
int soreserve(struct socket *so, u_long sndcc, u_long rcvcc);
void sorflush(struct socket *so);
int sosend(struct socket *so, struct mbuf *addr, struct uio *uio,
     struct mbuf *top, struct mbuf *control, int flags);
int sosetopt(struct socket *so, int level, int optname,
     struct mbuf *m0);
int soshutdown(struct socket *so, int how);
void sowakeup(struct socket *so, struct sockbuf *sb);
void sorwakeup(struct socket *);
void sowwakeup(struct socket *);
int sockargs(struct mbuf **, const void *, size_t, int);

int sendit(struct proc *, int, struct msghdr *, int, register_t *);
int recvit(struct proc *, int, struct msghdr *, caddr_t,
      register_t *);
int doaccept(struct proc *, int, struct sockaddr *, socklen_t *, int,
     register_t *);
# 29 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/domain.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)(void);

 int (*dom_externalize)(struct mbuf *, socklen_t, int);

 void (*dom_dispose)(struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;

 unsigned int dom_rtkeylen;
 unsigned int dom_rtoffset;
 unsigned int dom_maxplen;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


extern struct domain *domains[];
void domaininit(void);

extern struct domain inetdomain;


extern struct domain inet6domain;
# 30 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/protosw.h" 1
# 58 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/protosw.h"
struct mbuf;
struct sockaddr;
struct socket;
struct domain;
struct proc;

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;



 void (*pr_input)(struct mbuf *, ...);

 int (*pr_output)(struct mbuf *, ...);

 void *(*pr_ctlinput)(int, struct sockaddr *, u_int, void *);

 int (*pr_ctloutput)(int, struct socket *, int, int, struct mbuf **);



 int (*pr_usrreq)(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *, struct proc *);


 void (*pr_init)(void);
 void (*pr_fasttimo)(void);
 void (*pr_slowtimo)(void);
 void (*pr_drain)(void);

 int (*pr_sysctl)(int *, u_int, void *, size_t *, void *, size_t);
};
# 229 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/protosw.h"
struct sockaddr;
struct protosw *pffindproto(int, int, int);
struct protosw *pffindtype(int, int);
void pfctlinput(int, struct sockaddr *);

extern u_char ip_protox[];
extern struct protosw inetsw[];
# 31 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h"
struct kinfo_pool {
 unsigned int pr_size;
 unsigned int pr_pgsize;
 unsigned int pr_itemsperpage;
 unsigned int pr_minpages;
 unsigned int pr_maxpages;
 unsigned int pr_hardlimit;


 unsigned int pr_npages;
 unsigned int pr_nout;
 unsigned int pr_nitems;

 unsigned long pr_nget;
 unsigned long pr_nput;
 unsigned long pr_nfail;
 unsigned long pr_npagealloc;
 unsigned long pr_npagefree;
 unsigned int pr_hiwat;
 unsigned long pr_nidle;
};




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
# 73 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h" 2


struct pool;
struct pool_request;
struct pool_requests { struct pool_request *tqh_first; struct pool_request **tqh_last; };

struct pool_allocator {
 void *(*pa_alloc)(struct pool *, int, int *);
 void (*pa_free)(struct pool *, void *);
 size_t pa_pagesz;
};
# 111 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/pool.h"
struct pool_pagelist { struct pool_page_header *tqh_first; struct pool_page_header **tqh_last; };

struct pool_cache_item;
struct pool_cache_lists { struct pool_cache_item *tqh_first; struct pool_cache_item **tqh_last; };
struct cpumem;

struct pool {
 struct mutex pr_mtx;
 struct { struct pool *sqe_next; }
   pr_poollist;
 struct pool_pagelist
   pr_emptypages;
 struct pool_pagelist
   pr_fullpages;
 struct pool_pagelist
   pr_partpages;
 struct pool_page_header *
   pr_curpage;
 unsigned int pr_size;
 unsigned int pr_minitems;
 unsigned int pr_minpages;
 unsigned int pr_maxpages;
 unsigned int pr_npages;
 unsigned int pr_itemsperpage;
 unsigned int pr_slack;
 unsigned int pr_nitems;
 unsigned int pr_nout;
 unsigned int pr_hardlimit;

 unsigned int pr_serial;
 unsigned int pr_pgsize;
 vaddr_t pr_pgmask;
 struct pool_allocator *
   pr_alloc;
 const char * pr_wchan;






 int pr_ipl;

 struct phtree { struct rb_tree rbh_root; }
   pr_phtree;

 struct cpumem * pr_cache;
 unsigned long pr_cache_magic[2];
 struct mutex pr_cache_mtx;
 struct pool_cache_lists
   pr_cache_lists;
 u_int pr_cache_nlist;
 u_int pr_cache_items;
 u_int pr_cache_contention;
 int pr_cache_nout;

 u_int pr_align;
 u_int pr_maxcolors;
 int pr_phoffset;





 const char *pr_hardlimit_warning;
 struct timeval pr_hardlimit_ratecap;
 struct timeval pr_hardlimit_warning_last;




 struct mutex pr_requests_mtx;
 struct pool_requests
   pr_requests;
 unsigned int pr_requesting;




 unsigned long pr_nget;
 unsigned long pr_nfail;
 unsigned long pr_nput;
 unsigned long pr_npagealloc;
 unsigned long pr_npagefree;
 unsigned int pr_hiwat;
 unsigned long pr_nidle;


 const struct kmem_pa_mode *
   pr_crange;
};





extern struct pool_allocator pool_allocator_single;

struct pool_request {
 struct { struct pool_request *tqe_next; struct pool_request **tqe_prev; } pr_entry;
 void (*pr_handler)(void *, void *);
 void *pr_cookie;
 void *pr_item;
};

void pool_init(struct pool *, size_t, u_int, int, int,
      const char *, struct pool_allocator *);
void pool_cache_init(struct pool *);
void pool_destroy(struct pool *);
void pool_setlowat(struct pool *, int);
void pool_sethiwat(struct pool *, int);
int pool_sethardlimit(struct pool *, u_int, const char *, int);
struct uvm_constraint_range;
void pool_set_constraints(struct pool *,
      const struct kmem_pa_mode *mode);

void *pool_get(struct pool *, int) __attribute__((__malloc__));
void pool_request_init(struct pool_request *,
      void (*)(void *, void *), void *);
void pool_request(struct pool *, struct pool_request *);
void pool_put(struct pool *, void *);
int pool_reclaim(struct pool *);
void pool_reclaim_all(void);
int pool_prime(struct pool *, int);





void pool_printit(struct pool *, const char *,
      int (*)(const char *, ...));
void pool_walk(struct pool *, int, int (*)(const char *, ...),
      void (*)(void *, int, int (*)(const char *, ...)));



void dma_alloc_init(void);
void *dma_alloc(size_t size, int flags);
void dma_free(void *m, size_t size);
# 32 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2


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
# 35 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/netisr.h" 1
# 59 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/netisr.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/atomic.h" 1
# 21 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/atomic.h"
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
# 22 "/crypt/home/bluhm/openbsd/cvs/src/sys/sys/atomic.h" 2
# 60 "/crypt/home/bluhm/openbsd/cvs/src/sys/net/netisr.h" 2

extern int netisr;
extern struct task if_input_task_locked;

void arpintr(void);
void ipintr(void);
void ip6intr(void);
void pppintr(void);
void bridgeintr(void);
void pppoeintr(void);
void switchintr(void);
void pfsyncintr(void);
# 36 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2

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
# 38 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip.h" 1
# 47 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip.h"
struct ip {

 u_int ip_hl:4,
    ip_v:4;





 u_int8_t ip_tos;
 u_int16_t ip_len;
 u_int16_t ip_id;
 u_int16_t ip_off;




 u_int8_t ip_ttl;
 u_int8_t ip_p;
 u_int16_t ip_sum;
 struct in_addr ip_src, ip_dst;
};
# 166 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip.h"
struct ip_timestamp {
 u_int8_t ipt_code;
 u_int8_t ipt_len;
 u_int8_t ipt_ptr;

 u_int ipt_flg:4,
   ipt_oflw:4;





 union ipt_timestamp {
   u_int32_t ipt_time[1];
   struct ipt_ta {
   struct in_addr ipt_addr;
   u_int32_t ipt_time;
   } ipt_ta[1];
 } ipt_timestamp;
};
# 217 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip.h"
struct ippseudo {
 struct in_addr ippseudo_src;
 struct in_addr ippseudo_dst;
 u_int8_t ippseudo_pad;
 u_int8_t ippseudo_p;
 u_int16_t ippseudo_len;
};
# 39 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
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
# 40 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h" 1
# 68 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h"
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h" 1
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_hdr {
 union {
  struct ip6_hdrctl {
   u_int32_t ip6_un1_flow;
   u_int16_t ip6_un1_plen;
   u_int8_t ip6_un1_nxt;
   u_int8_t ip6_un1_hlim;
  } ip6_un1;
  u_int8_t ip6_un2_vfc;
 } ip6_ctlun;
 struct in6_addr ip6_src;
 struct in6_addr ip6_dst;
} __attribute__((__packed__));
# 116 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_hdr_pseudo {
 struct in6_addr ip6ph_src;
 struct in6_addr ip6ph_dst;
 u_int32_t ip6ph_len;
 u_int8_t ip6ph_zero[3];
 u_int8_t ip6ph_nxt;
} __attribute__((__packed__));





struct ip6_ext {
 u_int8_t ip6e_nxt;
 u_int8_t ip6e_len;
} __attribute__((__packed__));



struct ip6_hbh {
 u_int8_t ip6h_nxt;
 u_int8_t ip6h_len;

} __attribute__((__packed__));



struct ip6_dest {
 u_int8_t ip6d_nxt;
 u_int8_t ip6d_len;

} __attribute__((__packed__));
# 172 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_opt {
 u_int8_t ip6o_type;
 u_int8_t ip6o_len;
} __attribute__((__packed__));


struct ip6_opt_jumbo {
 u_int8_t ip6oj_type;
 u_int8_t ip6oj_len;
 u_int8_t ip6oj_jumbo_len[4];
} __attribute__((__packed__));



struct ip6_opt_nsap {
 u_int8_t ip6on_type;
 u_int8_t ip6on_len;
 u_int8_t ip6on_src_nsap_len;
 u_int8_t ip6on_dst_nsap_len;


} __attribute__((__packed__));


struct ip6_opt_tunnel {
 u_int8_t ip6ot_type;
 u_int8_t ip6ot_len;
 u_int8_t ip6ot_encap_limit;
} __attribute__((__packed__));


struct ip6_opt_router {
 u_int8_t ip6or_type;
 u_int8_t ip6or_len;
 u_int8_t ip6or_value[2];
} __attribute__((__packed__));
# 222 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip6.h"
struct ip6_rthdr {
 u_int8_t ip6r_nxt;
 u_int8_t ip6r_len;
 u_int8_t ip6r_type;
 u_int8_t ip6r_segleft;

} __attribute__((__packed__));


struct ip6_rthdr0 {
 u_int8_t ip6r0_nxt;
 u_int8_t ip6r0_len;
 u_int8_t ip6r0_type;
 u_int8_t ip6r0_segleft;
 u_int32_t ip6r0_reserved;
} __attribute__((__packed__));


struct ip6_frag {
 u_int8_t ip6f_nxt;
 u_int8_t ip6f_reserved;
 u_int16_t ip6f_offlg;
 u_int32_t ip6f_ident;
} __attribute__((__packed__));
# 69 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/ip6_var.h" 1
# 71 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet6/ip6_var.h"
struct ip6q {
 struct { struct ip6q *tqe_next; struct ip6q **tqe_prev; } ip6q_queue;
 struct ip6asfrag_list { struct ip6asfrag *lh_first; } ip6q_asfrag;
 struct in6_addr ip6q_src, ip6q_dst;
 int ip6q_unfrglen;
 int ip6q_nfrag;
 u_int32_t ip6q_ident;
 u_int8_t ip6q_nxt;
 u_int8_t ip6q_ttl;
};

struct ip6asfrag {
 struct { struct ip6asfrag *le_next; struct ip6asfrag **le_prev; } ip6af_list;
 struct mbuf *ip6af_m;
 int ip6af_offset;
 int ip6af_frglen;
 int ip6af_off;
 u_int32_t ip6af_flow;
 u_int16_t ip6af_mff;
};



struct ip6_moptions {
 struct { struct in6_multi_mship *lh_first; } im6o_memberships;
 unsigned short im6o_ifidx;
 u_char im6o_hlim;
 u_char im6o_loop;
};






struct ip6po_rhinfo {
 struct ip6_rthdr *ip6po_rhi_rthdr;
 struct route_in6 ip6po_rhi_route;
};



struct ip6_pktopts {

 int ip6po_hlim;


 struct in6_pktinfo *ip6po_pktinfo;


 struct ip6_hbh *ip6po_hbh;


 struct ip6_dest *ip6po_dest1;


 struct ip6po_rhinfo ip6po_rhinfo;


 struct ip6_dest *ip6po_dest2;


 int ip6po_tclass;


 int ip6po_minmtu;




 int ip6po_flags;

};

struct ip6stat {
 u_int64_t ip6s_total;
 u_int64_t ip6s_tooshort;
 u_int64_t ip6s_toosmall;
 u_int64_t ip6s_fragments;
 u_int64_t ip6s_fragdropped;
 u_int64_t ip6s_fragtimeout;
 u_int64_t ip6s_fragoverflow;
 u_int64_t ip6s_forward;
 u_int64_t ip6s_cantforward;
 u_int64_t ip6s_redirectsent;
 u_int64_t ip6s_delivered;
 u_int64_t ip6s_localout;
 u_int64_t ip6s_odropped;
 u_int64_t ip6s_reassembled;
 u_int64_t ip6s_fragmented;
 u_int64_t ip6s_ofragments;
 u_int64_t ip6s_cantfrag;
 u_int64_t ip6s_badoptions;
 u_int64_t ip6s_noroute;
 u_int64_t ip6s_badvers;
 u_int64_t ip6s_rawout;
 u_int64_t ip6s_badscope;
 u_int64_t ip6s_notmember;
 u_int64_t ip6s_nxthist[256];
 u_int64_t ip6s_m1;
 u_int64_t ip6s_m2m[32];
 u_int64_t ip6s_mext1;
 u_int64_t ip6s_mext2m;
 u_int64_t ip6s_nogif;
 u_int64_t ip6s_toomanyhdr;







 u_int64_t ip6s_sources_none;

 u_int64_t ip6s_sources_sameif[16];

 u_int64_t ip6s_sources_otherif[16];




 u_int64_t ip6s_sources_samescope[16];




 u_int64_t ip6s_sources_otherscope[16];

 u_int64_t ip6s_sources_deprecated[16];

 u_int64_t ip6s_forward_cachehit;
 u_int64_t ip6s_forward_cachemiss;
};







extern int ip6_mtudisc_timeout;
extern struct rttimer_queue *icmp6_mtudisc_timeout_q;

extern struct ip6stat ip6stat;
extern int ip6_defhlim;
extern int ip6_defmcasthlim;
extern int ip6_forwarding;
extern int ip6_mforwarding;
extern int ip6_multipath;
extern int ip6_sendredirect;
extern int ip6_use_deprecated;
extern int ip6_mcast_pmtu;
extern int ip6_neighborgcthresh;
extern int ip6_maxifprefixes;
extern int ip6_maxifdefrouters;
extern int ip6_maxdynroutes;

extern struct socket *ip6_mrouter;
extern int ip6_sendredirects;
extern int ip6_maxfragpackets;
extern int ip6_maxfrags;
extern int ip6_log_interval;
extern time_t ip6_log_time;
extern int ip6_hdrnestlimit;
extern int ip6_dad_count;
extern int ip6_dad_pending;

extern int ip6_auto_flowlabel;
extern int ip6_auto_linklocal;

struct in6pcb;
struct inpcb;

int icmp6_ctloutput(int, struct socket *, int, int, struct mbuf **);

void ip6_init(void);
void ip6intr(void);
void ip6_input(struct mbuf *);
void ip6_freepcbopts(struct ip6_pktopts *);
void ip6_freemoptions(struct ip6_moptions *);
int ip6_unknown_opt(u_int8_t *, struct mbuf *, int);
u_int8_t *ip6_get_prevhdr(struct mbuf *, int);
int ip6_nexthdr(struct mbuf *, int, int, int *);
int ip6_lasthdr(struct mbuf *, int, int, int *);
int ip6_mforward(struct ip6_hdr *, struct ifnet *, struct mbuf *);
int ip6_process_hopopts(struct mbuf *, u_int8_t *, int, u_int32_t *,
      u_int32_t *);
void ip6_savecontrol(struct inpcb *, struct mbuf *, struct mbuf **);
int ip6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ip6_forward(struct mbuf *, struct rtentry *, int);

void ip6_mloopback(struct ifnet *, struct mbuf *, struct sockaddr_in6 *);
int ip6_output(struct mbuf *, struct ip6_pktopts *, struct route_in6 *, int,
     struct ip6_moptions *, struct inpcb *);
int ip6_fragment(struct mbuf *, int, u_char, u_long);
int ip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip6_raw_ctloutput(int, struct socket *, int, int, struct mbuf **);
void ip6_initpktopts(struct ip6_pktopts *);
int ip6_setpktopts(struct mbuf *, struct ip6_pktopts *,
     struct ip6_pktopts *, int, int);
void ip6_clearpktopts(struct ip6_pktopts *, int);
void ip6_randomid_init(void);
u_int32_t ip6_randomid(void);
void ip6_send(struct mbuf *);

int route6_input(struct mbuf **, int *, int);

void frag6_init(void);
int frag6_input(struct mbuf **, int *, int);
int frag6_deletefraghdr(struct mbuf *, int);
void frag6_slowtimo(void);
void frag6_drain(void);

void rip6_init(void);
int rip6_input(struct mbuf **mp, int *offp, int proto);
void rip6_ctlinput(int, struct sockaddr *, u_int, void *);
int rip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int rip6_output(struct mbuf *, ...);
int rip6_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);
int rip6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

int dest6_input(struct mbuf **, int *, int);
int none_input(struct mbuf **, int *, int);

int in6_pcbselsrc(struct in6_addr **, struct sockaddr_in6 *,
     struct inpcb *, struct ip6_pktopts *);
int in6_selectsrc(struct in6_addr **, struct sockaddr_in6 *,
     struct ip6_moptions *, unsigned int);
struct rtentry *in6_selectroute(struct sockaddr_in6 *, struct ip6_pktopts *,
     struct route_in6 *, unsigned int rtableid);

u_int32_t ip6_randomflowlabel(void);


struct tdb;
struct tdb *
 ip6_output_ipsec_lookup(struct mbuf *, int *, struct inpcb *);
int ip6_output_ipsec_send(struct tdb *, struct mbuf *, int, int);
# 70 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h" 1
# 70 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct icmp6_hdr {
 u_int8_t icmp6_type;
 u_int8_t icmp6_code;
 u_int16_t icmp6_cksum;
 union {
  u_int32_t icmp6_un_data32[1];
  u_int16_t icmp6_un_data16[2];
  u_int8_t icmp6_un_data8[4];
 } icmp6_dataun;
} __attribute__((__packed__));
# 163 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct mld_hdr {
 struct icmp6_hdr mld_icmp6_hdr;
 struct in6_addr mld_addr;
} __attribute__((__packed__));
# 179 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct nd_router_solicit {
 struct icmp6_hdr nd_rs_hdr;

} __attribute__((__packed__));






struct nd_router_advert {
 struct icmp6_hdr nd_ra_hdr;
 u_int32_t nd_ra_reachable;
 u_int32_t nd_ra_retransmit;

} __attribute__((__packed__));
# 213 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct nd_neighbor_solicit {
 struct icmp6_hdr nd_ns_hdr;
 struct in6_addr nd_ns_target;

} __attribute__((__packed__));






struct nd_neighbor_advert {
 struct icmp6_hdr nd_na_hdr;
 struct in6_addr nd_na_target;

} __attribute__((__packed__));
# 238 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct nd_redirect {
 struct icmp6_hdr nd_rd_hdr;
 struct in6_addr nd_rd_target;
 struct in6_addr nd_rd_dst;

} __attribute__((__packed__));






struct nd_opt_hdr {
 u_int8_t nd_opt_type;
 u_int8_t nd_opt_len;

} __attribute__((__packed__));
# 265 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct nd_opt_prefix_info {
 u_int8_t nd_opt_pi_type;
 u_int8_t nd_opt_pi_len;
 u_int8_t nd_opt_pi_prefix_len;
 u_int8_t nd_opt_pi_flags_reserved;
 u_int32_t nd_opt_pi_valid_time;
 u_int32_t nd_opt_pi_preferred_time;
 u_int32_t nd_opt_pi_reserved2;
 struct in6_addr nd_opt_pi_prefix;
} __attribute__((__packed__));




struct nd_opt_rd_hdr {
 u_int8_t nd_opt_rh_type;
 u_int8_t nd_opt_rh_len;
 u_int16_t nd_opt_rh_reserved1;
 u_int32_t nd_opt_rh_reserved2;

} __attribute__((__packed__));

struct nd_opt_mtu {
 u_int8_t nd_opt_mtu_type;
 u_int8_t nd_opt_mtu_len;
 u_int16_t nd_opt_mtu_reserved;
 u_int32_t nd_opt_mtu_mtu;
} __attribute__((__packed__));

struct nd_opt_route_info {
 u_int8_t nd_opt_rti_type;
 u_int8_t nd_opt_rti_len;
 u_int8_t nd_opt_rti_prefixlen;
 u_int8_t nd_opt_rti_flags;
 u_int32_t nd_opt_rti_lifetime;
} __attribute__((__packed__));

struct nd_opt_rdnss {
 u_int8_t nd_opt_rdnss_type;
 u_int8_t nd_opt_rdnss_len;
 u_int16_t nd_opt_rdnss_reserved;
 u_int32_t nd_opt_rdnss_lifetime;

} __attribute__((__packed__));

struct nd_opt_dnssl {
 u_int8_t nd_opt_dnssl_type;
 u_int8_t nd_opt_dnssl_len;
 u_int16_t nd_opt_dnssl_reserved;
 u_int32_t nd_opt_dnssl_lifetime;

} __attribute__((__packed__));




struct icmp6_namelookup {
 struct icmp6_hdr icmp6_nl_hdr;
 u_int8_t icmp6_nl_nonce[8];
 int32_t icmp6_nl_ttl;





} __attribute__((__packed__));




struct icmp6_nodeinfo {
 struct icmp6_hdr icmp6_ni_hdr;
 u_int8_t icmp6_ni_nonce[8];

} __attribute__((__packed__));
# 365 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct ni_reply_fqdn {
 u_int32_t ni_fqdn_ttl;
 u_int8_t ni_fqdn_namelen;
 u_int8_t ni_fqdn_name[3];
} __attribute__((__packed__));




struct icmp6_router_renum {
 struct icmp6_hdr rr_hdr;
 u_int8_t rr_segnum;
 u_int8_t rr_flags;
 u_int16_t rr_maxdelay;
 u_int32_t rr_reserved;
} __attribute__((__packed__));
# 393 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct rr_pco_match {
 u_int8_t rpm_code;
 u_int8_t rpm_len;
 u_int8_t rpm_ordinal;
 u_int8_t rpm_matchlen;
 u_int8_t rpm_minlen;
 u_int8_t rpm_maxlen;
 u_int16_t rpm_reserved;
 struct in6_addr rpm_prefix;
} __attribute__((__packed__));






struct rr_pco_use {
 u_int8_t rpu_uselen;
 u_int8_t rpu_keeplen;
 u_int8_t rpu_ramask;
 u_int8_t rpu_raflags;
 u_int32_t rpu_vltime;
 u_int32_t rpu_pltime;
 u_int32_t rpu_flags;
 struct in6_addr rpu_prefix;
} __attribute__((__packed__));






struct rr_result {
 u_int16_t rrr_flags;
 u_int8_t rrr_ordinal;
 u_int8_t rrr_matchedlen;
 u_int32_t rrr_ifid;
 struct in6_addr rrr_prefix;
} __attribute__((__packed__));







struct icmp6_filter {
 u_int32_t icmp6_filt[8];
};
# 460 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct icmp6errstat {
 u_int64_t icp6errs_dst_unreach_noroute;
 u_int64_t icp6errs_dst_unreach_admin;
 u_int64_t icp6errs_dst_unreach_beyondscope;
 u_int64_t icp6errs_dst_unreach_addr;
 u_int64_t icp6errs_dst_unreach_noport;
 u_int64_t icp6errs_packet_too_big;
 u_int64_t icp6errs_time_exceed_transit;
 u_int64_t icp6errs_time_exceed_reassembly;
 u_int64_t icp6errs_paramprob_header;
 u_int64_t icp6errs_paramprob_nextheader;
 u_int64_t icp6errs_paramprob_option;
 u_int64_t icp6errs_redirect;
 u_int64_t icp6errs_unknown;
};

struct icmp6stat {

 u_int64_t icp6s_error;
 u_int64_t icp6s_canterror;
 u_int64_t icp6s_toofreq;
 u_int64_t icp6s_outhist[256];

 u_int64_t icp6s_badcode;
 u_int64_t icp6s_tooshort;
 u_int64_t icp6s_checksum;
 u_int64_t icp6s_badlen;




 u_int64_t icp6s_reflect;
 u_int64_t icp6s_inhist[256];
 u_int64_t icp6s_nd_toomanyopt;
 struct icmp6errstat icp6s_outerrhist;
# 513 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
 u_int64_t icp6s_pmtuchg;
 u_int64_t icp6s_nd_badopt;
 u_int64_t icp6s_badns;
 u_int64_t icp6s_badna;
 u_int64_t icp6s_badrs;
 u_int64_t icp6s_badra;
 u_int64_t icp6s_badredirect;
};
# 594 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/icmp6.h"
struct rtentry;
struct rttimer;
struct in6_multi;

void icmp6_init(void);
void icmp6_paramerror(struct mbuf *, int);
void icmp6_error(struct mbuf *, int, int, int);
int icmp6_input(struct mbuf **, int *, int);
void icmp6_fasttimo(void);
void icmp6_reflect(struct mbuf *, size_t);
void icmp6_prepare(struct mbuf *);
void icmp6_redirect_input(struct mbuf *, int);
void icmp6_redirect_output(struct mbuf *, struct rtentry *);
int icmp6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

struct ip6ctlparam;
void icmp6_mtudisc_update(struct ip6ctlparam *, int);
void icmp6_mtudisc_callback_register(void (*)(struct sockaddr_in6 *, u_int));

extern int icmp6_redirtimeout;
# 71 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h" 2
# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h" 1
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
struct m_tag;
# 54 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_ipsp.h"
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
# 72 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h" 2

# 1 "/crypt/home/bluhm/openbsd/cvs/src/sys/crypto/siphash.h" 1
# 55 "/crypt/home/bluhm/openbsd/cvs/src/sys/crypto/siphash.h"
typedef struct _SIPHASH_CTX {
 uint64_t v[4];
 uint8_t buf[8];
 uint32_t bytes;
} SIPHASH_CTX;

typedef struct {
 uint64_t k0;
 uint64_t k1;
} SIPHASH_KEY;

void SipHash_Init(SIPHASH_CTX *, const SIPHASH_KEY *);
void SipHash_Update(SIPHASH_CTX *, int, int, const void *, size_t)
      __attribute__ ((__bounded__ (__buffer__, 4, 5) ));
uint64_t SipHash_End(SIPHASH_CTX *, int, int);
void SipHash_Final(void *, SIPHASH_CTX *, int, int)
      __attribute__ ((__bounded__ (__minbytes__, 1, 8) ));
uint64_t SipHash(const SIPHASH_KEY *, int, int, const void *, size_t)
      __attribute__ ((__bounded__ (__buffer__, 4, 5) ));
# 74 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h" 2

struct pf_state_key;

union inpaddru {
 struct in6_addr iau_addr6;
 struct {
  uint8_t pad[12];
  struct in_addr inaddr;
 } iau_a4u;
};
# 92 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h"
struct inpcb {
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_hash;
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_lhash;
 struct { struct inpcb *tqe_next; struct inpcb **tqe_prev; } inp_queue;
 struct inpcbtable *inp_table;
 union inpaddru inp_faddru;
 union inpaddru inp_laddru;




 u_int16_t inp_fport;
 u_int16_t inp_lport;
 struct socket *inp_socket;
 caddr_t inp_ppcb;
 union {
  struct route ru_route;
  struct route_in6 ru_route6;
 } inp_ru;


 int inp_flags;
 union {
  struct ip hu_ip;
  struct ip6_hdr hu_ipv6;
 } inp_hu;


 struct mbuf *inp_options;
 struct ip6_pktopts *inp_outputopts6;
 int inp_hops;
 union {
  struct ip_moptions *mou_mo;
  struct ip6_moptions *mou_mo6;
 } inp_mou;


 u_char inp_seclevel[4];




 u_char inp_ip_minttl;



 int inp_cksum6;



 struct icmp6_filter *inp_icmp6filt;
 struct pf_state_key *inp_pf_sk;
 u_int inp_rtableid;
 int inp_pipex;
 int inp_divertfl;
};

struct inpcbhead { struct inpcb *lh_first; };

struct inpcbtable {
 struct inpthead { struct inpcb *tqh_first; struct inpcb **tqh_last; } inpt_queue;
 struct inpcbhead *inpt_hashtbl, *inpt_lhashtbl;
 SIPHASH_KEY inpt_key;
 u_long inpt_hash, inpt_lhash;
 int inpt_count;
};
# 243 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/in_pcb.h"
struct baddynamicports {
 u_int32_t tcp[((((65536) + (((sizeof(u_int32_t) * 8)) - 1)) / ((sizeof(u_int32_t) * 8))))];
 u_int32_t udp[((((65536) + (((sizeof(u_int32_t) * 8)) - 1)) / ((sizeof(u_int32_t) * 8))))];
};



extern struct baddynamicports baddynamicports;
extern struct baddynamicports rootonlyports;



void in_losing(struct inpcb *);
int in_pcballoc(struct socket *, struct inpcbtable *);
int in_pcbbind(struct inpcb *, struct mbuf *, struct proc *);
int in_pcbaddrisavail(struct inpcb *, struct sockaddr_in *, int,
     struct proc *);
int in_pcbconnect(struct inpcb *, struct mbuf *);
void in_pcbdetach(struct inpcb *);
void in_pcbdisconnect(struct inpcb *);
struct inpcb *
  in_pcbhashlookup(struct inpcbtable *, struct in_addr,
          u_int, struct in_addr, u_int, u_int);
struct inpcb *
  in_pcblookup_listen(struct inpcbtable *, struct in_addr, u_int, int,
     struct mbuf *, u_int);

struct inpcb *
  in6_pcbhashlookup(struct inpcbtable *, const struct in6_addr *,
          u_int, const struct in6_addr *, u_int, u_int);
struct inpcb *
  in6_pcblookup_listen(struct inpcbtable *,
          struct in6_addr *, u_int, int, struct mbuf *,
          u_int);
int in6_pcbaddrisavail(struct inpcb *, struct sockaddr_in6 *, int,
     struct proc *);
int in6_pcbconnect(struct inpcb *, struct mbuf *);
int in6_setsockaddr(struct inpcb *, struct mbuf *);
int in6_setpeeraddr(struct inpcb *, struct mbuf *);

void in_pcbinit(struct inpcbtable *, int);
struct inpcb *
  in_pcblookup_local(struct inpcbtable *, void *, u_int, int, u_int);
void in_pcbnotifyall(struct inpcbtable *, struct sockaddr *,
     u_int, int, void (*)(struct inpcb *, int));
void in_pcbrehash(struct inpcb *);
void in_rtchange(struct inpcb *, int);
void in_setpeeraddr(struct inpcb *, struct mbuf *);
void in_setsockaddr(struct inpcb *, struct mbuf *);
int in_baddynamic(u_int16_t, u_int16_t);
int in_rootonly(u_int16_t, u_int16_t);
int in_pcbselsrc(struct in_addr **, struct sockaddr_in *, struct inpcb *);
struct rtentry *
 in_pcbrtentry(struct inpcb *);


int in6_pcbnotify(struct inpcbtable *, struct sockaddr_in6 *,
 u_int, const struct sockaddr_in6 *, u_int, u_int, int, void *,
 void (*)(struct inpcb *, int));
int in6_selecthlim(struct inpcb *);
int in_pcbpickport(u_int16_t *, void *, int, struct inpcb *, struct proc *);
# 41 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2

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
# 43 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c" 2

int ipsp_acquire_sa(struct ipsec_policy *, union sockaddr_union *,
     union sockaddr_union *, struct sockaddr_encap *, struct mbuf *);
struct ipsec_acquire *ipsp_pending_acquire(struct ipsec_policy *,
     union sockaddr_union *);
void ipsp_delete_acquire(void *);







struct pool ipsec_policy_pool;
struct pool ipsec_acquire_pool;
int ipsec_policy_pool_initialized = 0;
int ipsec_acquire_pool_initialized = 0;

struct radix_node_head **spd_tables;
unsigned int spd_table_max;

struct radix_node_head *
spd_table_get(unsigned int rtableid)
{
 unsigned int rdomain;

 if (spd_tables == ((void *)0))
  return (((void *)0));

 rdomain = rtable_l2(rtableid);
 if (rdomain > spd_table_max)
  return (((void *)0));

 return (spd_tables[rdomain]);
}

struct radix_node_head *
spd_table_add(unsigned int rtableid)
{
 struct radix_node_head *rnh = ((void *)0);
 unsigned int rdomain;
 void *p;

 rdomain = rtable_l2(rtableid);
 if (spd_tables == ((void *)0) || rdomain > spd_table_max) {
  if ((p = mallocarray(rdomain + 1, sizeof(*rnh),
      5, 0x0002|0x0008)) == ((void *)0))
   return (((void *)0));

  if (spd_tables != ((void *)0)) {
   bcopy(spd_tables, p, sizeof(*rnh) * (spd_table_max+1));
   free(spd_tables, 5, 0);
  }
  spd_tables = p;
  spd_table_max = rdomain;
 }

 if (spd_tables[rdomain] == ((void *)0)) {
  if (rn_inithead((void **)&rnh,
      __builtin_offsetof(struct sockaddr_encap, sen_type)) == 0)
   rnh = ((void *)0);
  spd_tables[rdomain] = rnh;
 }

 return (spd_tables[rdomain]);
}
# 125 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c"
struct tdb *
ipsp_spd_lookup(struct mbuf *m, int af, int hlen, int *error, int direction,
    struct tdb *tdbp, struct inpcb *inp, u_int32_t ipsecflowinfo)
{
 struct radix_node_head *rnh;
 struct radix_node *rn;
 union sockaddr_union sdst, ssrc;
 struct sockaddr_encap *ddst, dst;
 struct ipsec_policy *ipo;
 struct ipsec_ids *ids = ((void *)0);
 int signore = 0, dignore = 0;
 u_int rdomain = rtable_l2(m->M_dat.MH.MH_pkthdr.ph_rtableid);





 if (!ipsec_in_use && inp == ((void *)0)) {
  *error = 0;
  return ((void *)0);
 }




 if ((inp != ((void *)0)) && (direction == 0x1) &&
     (inp->inp_seclevel[1] == 0x00) &&
     (inp->inp_seclevel[2] == 0x00) &&
     (inp->inp_seclevel[0] == 0x00)) {
  *error = 0;
  return ((void *)0);
 }

 memset(&dst, 0, sizeof(dst));
 memset(&sdst, 0, sizeof(union sockaddr_union));
 memset(&ssrc, 0, sizeof(union sockaddr_union));
 ddst = (struct sockaddr_encap *)&dst;
 ddst->sen_family = 30;
 ddst->sen_len = sizeof(struct sockaddr_encap);

 switch (af) {
 case 2:
  if (hlen < sizeof (struct ip) || m->M_dat.MH.MH_pkthdr.len < hlen) {
   *error = 22;
   return ((void *)0);
  }
  ddst->Sen.Sip4.Direction = direction;
  ddst->sen_type = 0x0001;

  m_copydata(m, __builtin_offsetof(struct ip, ip_src),
      sizeof(struct in_addr), (caddr_t) &(ddst->Sen.Sip4.Src));
  m_copydata(m, __builtin_offsetof(struct ip, ip_dst),
      sizeof(struct in_addr), (caddr_t) &(ddst->Sen.Sip4.Dst));
  m_copydata(m, __builtin_offsetof(struct ip, ip_p), sizeof(u_int8_t),
      (caddr_t) &(ddst->Sen.Sip4.Proto));

  sdst.sin.sin_family = ssrc.sin.sin_family = 2;
  sdst.sin.sin_len = ssrc.sin.sin_len =
      sizeof(struct sockaddr_in);
  ssrc.sin.sin_addr = ddst->Sen.Sip4.Src;
  sdst.sin.sin_addr = ddst->Sen.Sip4.Dst;




  switch (ddst->Sen.Sip4.Proto) {
  case 17:
  case 6:

   if (m->M_dat.MH.MH_pkthdr.len < hlen + 2 * sizeof(u_int16_t)) {
    *error = 22;
    return ((void *)0);
   }







   m_copydata(m, hlen, sizeof(u_int16_t),
       (caddr_t) &(ddst->Sen.Sip4.Sport));
   m_copydata(m, hlen + sizeof(u_int16_t), sizeof(u_int16_t),
       (caddr_t) &(ddst->Sen.Sip4.Dport));
   break;

  default:
   ddst->Sen.Sip4.Sport = 0;
   ddst->Sen.Sip4.Dport = 0;
  }

  break;


 case 24:
  if (hlen < sizeof (struct ip6_hdr) || m->M_dat.MH.MH_pkthdr.len < hlen) {
   *error = 22;
   return ((void *)0);
  }
  ddst->sen_type = 0x0004;
  ddst->Sen.Sip6.Direction = direction;

  m_copydata(m, __builtin_offsetof(struct ip6_hdr, ip6_src),
      sizeof(struct in6_addr),
      (caddr_t) &(ddst->Sen.Sip6.Src));
  m_copydata(m, __builtin_offsetof(struct ip6_hdr, ip6_dst),
      sizeof(struct in6_addr),
      (caddr_t) &(ddst->Sen.Sip6.Dst));
  m_copydata(m, __builtin_offsetof(struct ip6_hdr, ip6_ctlun.ip6_un1.ip6_un1_nxt),
      sizeof(u_int8_t),
      (caddr_t) &(ddst->Sen.Sip6.Proto));

  sdst.sin6.sin6_family = ssrc.sin6.sin6_family = 24;
  sdst.sin6.sin6_len = ssrc.sin6.sin6_len =
      sizeof(struct sockaddr_in6);
  in6_recoverscope(&ssrc.sin6, &ddst->Sen.Sip6.Src);
  in6_recoverscope(&sdst.sin6, &ddst->Sen.Sip6.Dst);




  switch (ddst->Sen.Sip6.Proto) {
  case 17:
  case 6:

   if (m->M_dat.MH.MH_pkthdr.len < hlen + 2 * sizeof(u_int16_t)) {
    *error = 22;
    return ((void *)0);
   }







   m_copydata(m, hlen, sizeof(u_int16_t),
       (caddr_t) &(ddst->Sen.Sip6.Sport));
   m_copydata(m, hlen + sizeof(u_int16_t), sizeof(u_int16_t),
       (caddr_t) &(ddst->Sen.Sip6.Dport));
   break;

  default:
   ddst->Sen.Sip6.Sport = 0;
   ddst->Sen.Sip6.Dport = 0;
  }

  break;


 default:
  *error = 47;
  return ((void *)0);
 }


 if ((rnh = spd_table_get(rdomain)) == ((void *)0) ||
     (rn = rn_match((caddr_t)&dst, rnh)) == ((void *)0)) {




  *error = 0;
  return ipsp_spd_inp(m, af, hlen, error, direction,
      tdbp, inp, ((void *)0));
 }
 ipo = (struct ipsec_policy *)rn;

 switch (ipo->ipo_type) {
 case 3:
  *error = 0;
  return ipsp_spd_inp(m, af, hlen, error, direction, tdbp,
      inp, ipo);

 case 4:
  *error = 65;
  return ((void *)0);

 case 0:
 case 1:
 case 2:
 case 5:

  break;

 default:
  *error = 22;
  return ((void *)0);
 }


 switch (ipo->ipo_dst.sa.sa_family) {
 case 2:
  if ((ipo->ipo_dst.sin.sin_addr.s_addr == ((u_int32_t) __extension__({ __uint32_t __swap32_x = ((u_int32_t)(0x00000000)); __builtin_constant_p((u_int32_t)(0x00000000)) ? __extension__({ __uint32_t __swap32gen_x = (__swap32_x); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : __extension__({ __uint32_t __swap32md_x = (__swap32_x); __asm ("bswap %0" : "+r" (__swap32md_x)); __swap32md_x; }); }))) ||
      (ipo->ipo_dst.sin.sin_addr.s_addr == ((u_int32_t) __extension__({ __uint32_t __swap32_x = ((u_int32_t)(0xffffffff)); __builtin_constant_p((u_int32_t)(0xffffffff)) ? __extension__({ __uint32_t __swap32gen_x = (__swap32_x); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : __extension__({ __uint32_t __swap32md_x = (__swap32_x); __asm ("bswap %0" : "+r" (__swap32md_x)); __swap32md_x; }); }))))
   dignore = 1;
  break;


 case 24:
  if ((((*(const u_int32_t *)(const void *)(&(&ipo->ipo_dst.sin6.sin6_addr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ipo->ipo_dst.sin6.sin6_addr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ipo->ipo_dst.sin6.sin6_addr)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&ipo->ipo_dst.sin6.sin6_addr)->__u6_addr.__u6_addr8[12]) == 0))) ||
      (memcmp(&ipo->ipo_dst.sin6.sin6_addr, &in6mask128,
      sizeof(in6mask128)) == 0))
   dignore = 1;
  break;

 }


 switch (ipo->ipo_src.sa.sa_family) {
 case 2:
  if (ipo->ipo_src.sin.sin_addr.s_addr == ((u_int32_t) __extension__({ __uint32_t __swap32_x = ((u_int32_t)(0x00000000)); __builtin_constant_p((u_int32_t)(0x00000000)) ? __extension__({ __uint32_t __swap32gen_x = (__swap32_x); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : __extension__({ __uint32_t __swap32md_x = (__swap32_x); __asm ("bswap %0" : "+r" (__swap32md_x)); __swap32md_x; }); })))
   signore = 1;
  break;


 case 24:
  if (((*(const u_int32_t *)(const void *)(&(&ipo->ipo_src.sin6.sin6_addr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ipo->ipo_src.sin6.sin6_addr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ipo->ipo_src.sin6.sin6_addr)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&ipo->ipo_src.sin6.sin6_addr)->__u6_addr.__u6_addr8[12]) == 0)))
   signore = 1;
  break;

 }


 if ((ipo->ipo_tdb) && (ipo->ipo_tdb->tdb_flags & 0x00010)) {
  do { if (((ipo)->ipo_tdb_next.tqe_next) != ((void *)0)) (ipo)->ipo_tdb_next.tqe_next->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_prev; else (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo)->ipo_tdb_next.tqe_prev; *(ipo)->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_next; ((ipo)->ipo_tdb_next.tqe_prev) = ((void *)-1); ((ipo)->ipo_tdb_next.tqe_next) = ((void *)-1); } while (0);

  ipo->ipo_tdb = ((void *)0);
 }


 if (direction == 0x2) {





  if ((inp != ((void *)0)) &&
      (inp->inp_seclevel[1] == 0x00) &&
      (inp->inp_seclevel[2] ==
   0x00) &&
      (inp->inp_seclevel[0] == 0x00)) {

   if (dignore ||
       !memcmp(&sdst, &ipo->ipo_dst, sdst.sa.sa_len)) {
    *error = 0;
    return ((void *)0);
   }
  }

  if (ipsecflowinfo)
   ids = ipsp_ids_lookup(ipsecflowinfo);


  if (ipo->ipo_tdb) {
   if ((ipo->ipo_last_searched <= ipsec_last_added) ||
       (ipo->ipo_sproto != ipo->ipo_tdb->tdb_sproto) ||
       memcmp(dignore ? &sdst : &ipo->ipo_dst,
       &ipo->ipo_tdb->tdb_dst,
       ipo->ipo_tdb->tdb_dst.sa.sa_len))
    goto nomatchout;

   if (!ipsp_aux_match(ipo->ipo_tdb,
       ids ? ids : ipo->ipo_ids,
       &ipo->ipo_addr, &ipo->ipo_mask))
    goto nomatchout;


   *error = 0;
   return ipsp_spd_inp(m, af, hlen, error, direction,
       tdbp, inp, ipo);

  nomatchout:

   do { if (((ipo)->ipo_tdb_next.tqe_next) != ((void *)0)) (ipo)->ipo_tdb_next.tqe_next->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_prev; else (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo)->ipo_tdb_next.tqe_prev; *(ipo)->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_next; ((ipo)->ipo_tdb_next.tqe_prev) = ((void *)-1); ((ipo)->ipo_tdb_next.tqe_next) = ((void *)-1); } while (0);

   ipo->ipo_tdb = ((void *)0);
   ipo->ipo_last_searched = 0;
  }
# 414 "/crypt/home/bluhm/openbsd/cvs/src/sys/netinet/ip_spd.c"
  if (ipo->ipo_last_searched <= ipsec_last_added) {

   if (dignore == 0)
    ipo->ipo_last_searched = time_second;


   ipo->ipo_tdb =
       gettdbbydst(rdomain,
    dignore ? &sdst : &ipo->ipo_dst,
    ipo->ipo_sproto,
    ids ? ids: ipo->ipo_ids,
    &ipo->ipo_addr, &ipo->ipo_mask);
   if (ipo->ipo_tdb) {
    do { (ipo)->ipo_tdb_next.tqe_next = ((void *)0); (ipo)->ipo_tdb_next.tqe_prev = (&ipo->ipo_tdb->tdb_policy_head)->tqh_last; *(&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo); (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = &(ipo)->ipo_tdb_next.tqe_next; } while (0);

    *error = 0;
    return ipsp_spd_inp(m, af, hlen, error,
        direction, tdbp, inp, ipo);
   }
  }


  switch (ipo->ipo_type) {
  case 2:

   if (ipsp_acquire_sa(ipo,
       dignore ? &sdst : &ipo->ipo_dst,
       signore ? ((void *)0) : &ipo->ipo_src, ddst, m) != 0) {
    *error = 13;
    return ((void *)0);
   }


  case 5:
   *error = -22;
   return ((void *)0);

  case 1:

   ipsp_acquire_sa(ipo, dignore ? &sdst : &ipo->ipo_dst,
       signore ? ((void *)0) : &ipo->ipo_src, ddst, ((void *)0));


  case 0:
   *error = 0;
   return ipsp_spd_inp(m, af, hlen, error, direction,
       tdbp, inp, ipo);
  }
 } else {
  if (tdbp != ((void *)0)) {

   if (ipo->ipo_tdb == tdbp) {
    *error = 0;
    return ipsp_spd_inp(m, af, hlen, error,
        direction, tdbp, inp, ipo);
   }

   if (memcmp(dignore ? &ssrc : &ipo->ipo_dst,
       &tdbp->tdb_src, tdbp->tdb_src.sa.sa_len) ||
       (ipo->ipo_sproto != tdbp->tdb_sproto))
    goto nomatchin;


   if (ipo->ipo_ids)
    if (tdbp->tdb_ids == ((void *)0) ||
        !ipsp_ids_match(ipo->ipo_ids, tdbp->tdb_ids))
     goto nomatchin;


   if (ipo->ipo_tdb)
    do { if (((ipo)->ipo_tdb_next.tqe_next) != ((void *)0)) (ipo)->ipo_tdb_next.tqe_next->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_prev; else (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo)->ipo_tdb_next.tqe_prev; *(ipo)->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_next; ((ipo)->ipo_tdb_next.tqe_prev) = ((void *)-1); ((ipo)->ipo_tdb_next.tqe_next) = ((void *)-1); } while (0);

   ipo->ipo_tdb = tdbp;
   do { (ipo)->ipo_tdb_next.tqe_next = ((void *)0); (ipo)->ipo_tdb_next.tqe_prev = (&tdbp->tdb_policy_head)->tqh_last; *(&tdbp->tdb_policy_head)->tqh_last = (ipo); (&tdbp->tdb_policy_head)->tqh_last = &(ipo)->ipo_tdb_next.tqe_next; } while (0);

   *error = 0;
   return ipsp_spd_inp(m, af, hlen, error, direction,
       tdbp, inp, ipo);

  nomatchin:
 ;
  }


  if (ipo->ipo_tdb) {






   if (ipo->ipo_sproto == ipo->ipo_tdb->tdb_sproto &&
       !memcmp(&ipo->ipo_tdb->tdb_src,
       dignore ? &ssrc : &ipo->ipo_dst,
       ipo->ipo_tdb->tdb_src.sa.sa_len))
    goto skipinputsearch;


   do { if (((ipo)->ipo_tdb_next.tqe_next) != ((void *)0)) (ipo)->ipo_tdb_next.tqe_next->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_prev; else (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo)->ipo_tdb_next.tqe_prev; *(ipo)->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_next; ((ipo)->ipo_tdb_next.tqe_prev) = ((void *)-1); ((ipo)->ipo_tdb_next.tqe_next) = ((void *)-1); } while (0);

   ipo->ipo_last_searched = 0;
   ipo->ipo_tdb = ((void *)0);
  }


  if (ipo->ipo_last_searched <= ipsec_last_added) {
   if (dignore == 0)
    ipo->ipo_last_searched = time_second;

   ipo->ipo_tdb =
       gettdbbysrc(rdomain,
    dignore ? &ssrc : &ipo->ipo_dst,
    ipo->ipo_sproto, ipo->ipo_ids,
    &ipo->ipo_addr, &ipo->ipo_mask);
   if (ipo->ipo_tdb)
    do { (ipo)->ipo_tdb_next.tqe_next = ((void *)0); (ipo)->ipo_tdb_next.tqe_prev = (&ipo->ipo_tdb->tdb_policy_head)->tqh_last; *(&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo); (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = &(ipo)->ipo_tdb_next.tqe_next; } while (0);

  }
  skipinputsearch:

  switch (ipo->ipo_type) {
  case 2:

   if (ipo->ipo_tdb) {
    *error = -22;
    return ((void *)0);
   }


   if ((*error = ipsp_acquire_sa(ipo,
       dignore ? &ssrc : &ipo->ipo_dst,
       signore ? ((void *)0) : &ipo->ipo_src, ddst, m)) != 0)
    return ((void *)0);


  case 5:

   *error = -22;
   return ((void *)0);

  case 1:

   if (ipo->ipo_tdb) {
    *error = 0;
    return ipsp_spd_inp(m, af, hlen, error,
        direction, tdbp, inp, ipo);
   }


   ipsp_acquire_sa(ipo, dignore ? &ssrc : &ipo->ipo_dst,
       signore ? ((void *)0) : &ipo->ipo_src, ddst, ((void *)0));


  case 0:
   *error = 0;
   return ipsp_spd_inp(m, af, hlen, error, direction,
       tdbp, inp, ipo);
  }
 }


 *error = 22;
 return ((void *)0);
}




int
ipsec_delete_policy(struct ipsec_policy *ipo)
{
 struct ipsec_acquire *ipa;
 struct radix_node_head *rnh;
 struct radix_node *rn = (struct radix_node *)ipo;
 int err = 0;

 if (--ipo->ipo_ref_count > 0)
  return 0;


 if ((rnh = spd_table_get(ipo->ipo_rdomain)) == ((void *)0) ||
     rn_delete(&ipo->ipo_addr, &ipo->ipo_mask, rnh, rn) == ((void *)0))
  return (3);

 if (ipo->ipo_tdb != ((void *)0))
  do { if (((ipo)->ipo_tdb_next.tqe_next) != ((void *)0)) (ipo)->ipo_tdb_next.tqe_next->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_prev; else (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo)->ipo_tdb_next.tqe_prev; *(ipo)->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_next; ((ipo)->ipo_tdb_next.tqe_prev) = ((void *)-1); ((ipo)->ipo_tdb_next.tqe_next) = ((void *)-1); } while (0);


 while ((ipa = ((&ipo->ipo_acquires)->tqh_first)) != ((void *)0))
  ipsp_delete_acquire(ipa);

 do { if (((ipo)->ipo_list.tqe_next) != ((void *)0)) (ipo)->ipo_list.tqe_next->ipo_list.tqe_prev = (ipo)->ipo_list.tqe_prev; else (&ipsec_policy_head)->tqh_last = (ipo)->ipo_list.tqe_prev; *(ipo)->ipo_list.tqe_prev = (ipo)->ipo_list.tqe_next; ((ipo)->ipo_list.tqe_prev) = ((void *)-1); ((ipo)->ipo_list.tqe_next) = ((void *)-1); } while (0);

 if (ipo->ipo_ids)
  ipsp_ids_free(ipo->ipo_ids);

 ipsec_in_use--;

 pool_put(&ipsec_policy_pool, ipo);

 return err;
}




void
ipsp_delete_acquire(void *v)
{
 struct ipsec_acquire *ipa = v;

 timeout_del(&ipa->ipa_timeout);
 do { if (((ipa)->ipa_next.tqe_next) != ((void *)0)) (ipa)->ipa_next.tqe_next->ipa_next.tqe_prev = (ipa)->ipa_next.tqe_prev; else (&ipsec_acquire_head)->tqh_last = (ipa)->ipa_next.tqe_prev; *(ipa)->ipa_next.tqe_prev = (ipa)->ipa_next.tqe_next; ((ipa)->ipa_next.tqe_prev) = ((void *)-1); ((ipa)->ipa_next.tqe_next) = ((void *)-1); } while (0);
 if (ipa->ipa_policy != ((void *)0))
  do { if (((ipa)->ipa_ipo_next.tqe_next) != ((void *)0)) (ipa)->ipa_ipo_next.tqe_next->ipa_ipo_next.tqe_prev = (ipa)->ipa_ipo_next.tqe_prev; else (&ipa->ipa_policy->ipo_acquires)->tqh_last = (ipa)->ipa_ipo_next.tqe_prev; *(ipa)->ipa_ipo_next.tqe_prev = (ipa)->ipa_ipo_next.tqe_next; ((ipa)->ipa_ipo_next.tqe_prev) = ((void *)-1); ((ipa)->ipa_ipo_next.tqe_next) = ((void *)-1); } while (0);

 pool_put(&ipsec_acquire_pool, ipa);
}





struct ipsec_acquire *
ipsp_pending_acquire(struct ipsec_policy *ipo, union sockaddr_union *gw)
{
 struct ipsec_acquire *ipa;

 for((ipa) = ((&ipo->ipo_acquires)->tqh_first); (ipa) != ((void *)0); (ipa) = ((ipa)->ipa_ipo_next.tqe_next)) {
  if (!memcmp(gw, &ipa->ipa_addr, gw->sa.sa_len))
   return ipa;
 }

 return ((void *)0);
}





int
ipsp_acquire_sa(struct ipsec_policy *ipo, union sockaddr_union *gw,
    union sockaddr_union *laddr, struct sockaddr_encap *ddst, struct mbuf *m)
{
 struct ipsec_acquire *ipa;


 if ((ipa = ipsp_pending_acquire(ipo, gw)) != ((void *)0))
  return 0;


 if (ipsec_acquire_pool_initialized == 0) {
  ipsec_acquire_pool_initialized = 1;
  pool_init(&ipsec_acquire_pool, sizeof(struct ipsec_acquire),
      0, 0x5, 0, "ipsec acquire", ((void *)0));
 }

 ipa = pool_get(&ipsec_acquire_pool, 0x0002|0x0008);
 if (ipa == ((void *)0))
  return 12;

 bcopy(gw, &ipa->ipa_addr, sizeof(union sockaddr_union));

 timeout_set(&ipa->ipa_timeout, ipsp_delete_acquire, ipa);

 ipa->ipa_info.sen_len = ipa->ipa_mask.sen_len = sizeof(struct sockaddr_encap);
 ipa->ipa_info.sen_family = ipa->ipa_mask.sen_family = 30;


 switch (ipo->ipo_addr.sen_type) {
 case 0x0001:
  ipa->ipa_info.sen_type = ipa->ipa_mask.sen_type = 0x0001;
  ipa->ipa_info.Sen.Sip4.Direction = ipo->ipo_addr.Sen.Sip4.Direction;
  ipa->ipa_mask.Sen.Sip4.Direction = ipo->ipo_mask.Sen.Sip4.Direction;

  if (ipsp_is_unspecified(ipo->ipo_dst)) {
   ipa->ipa_info.Sen.Sip4.Src = ddst->Sen.Sip4.Src;
   ipa->ipa_mask.Sen.Sip4.Src.s_addr = ((u_int32_t) __extension__({ __uint32_t __swap32_x = ((u_int32_t)(0xffffffff)); __builtin_constant_p((u_int32_t)(0xffffffff)) ? __extension__({ __uint32_t __swap32gen_x = (__swap32_x); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : __extension__({ __uint32_t __swap32md_x = (__swap32_x); __asm ("bswap %0" : "+r" (__swap32md_x)); __swap32md_x; }); }));

   ipa->ipa_info.Sen.Sip4.Dst = ddst->Sen.Sip4.Dst;
   ipa->ipa_mask.Sen.Sip4.Dst.s_addr = ((u_int32_t) __extension__({ __uint32_t __swap32_x = ((u_int32_t)(0xffffffff)); __builtin_constant_p((u_int32_t)(0xffffffff)) ? __extension__({ __uint32_t __swap32gen_x = (__swap32_x); (__uint32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : __extension__({ __uint32_t __swap32md_x = (__swap32_x); __asm ("bswap %0" : "+r" (__swap32md_x)); __swap32md_x; }); }));
  } else {
   ipa->ipa_info.Sen.Sip4.Src = ipo->ipo_addr.Sen.Sip4.Src;
   ipa->ipa_mask.Sen.Sip4.Src = ipo->ipo_mask.Sen.Sip4.Src;

   ipa->ipa_info.Sen.Sip4.Dst = ipo->ipo_addr.Sen.Sip4.Dst;
   ipa->ipa_mask.Sen.Sip4.Dst = ipo->ipo_mask.Sen.Sip4.Dst;
  }

  ipa->ipa_info.Sen.Sip4.Proto = ipo->ipo_addr.Sen.Sip4.Proto;
  ipa->ipa_mask.Sen.Sip4.Proto = ipo->ipo_mask.Sen.Sip4.Proto;

  if (ipo->ipo_addr.Sen.Sip4.Proto) {
   ipa->ipa_info.Sen.Sip4.Sport = ipo->ipo_addr.Sen.Sip4.Sport;
   ipa->ipa_mask.Sen.Sip4.Sport = ipo->ipo_mask.Sen.Sip4.Sport;

   ipa->ipa_info.Sen.Sip4.Dport = ipo->ipo_addr.Sen.Sip4.Dport;
   ipa->ipa_mask.Sen.Sip4.Dport = ipo->ipo_mask.Sen.Sip4.Dport;
  }
  break;


 case 0x0004:
  ipa->ipa_info.sen_type = ipa->ipa_mask.sen_type = 0x0004;
  ipa->ipa_info.Sen.Sip6.Direction =
      ipo->ipo_addr.Sen.Sip6.Direction;
  ipa->ipa_mask.Sen.Sip6.Direction =
      ipo->ipo_mask.Sen.Sip6.Direction;

  if (ipsp_is_unspecified(ipo->ipo_dst)) {
   ipa->ipa_info.Sen.Sip6.Src = ddst->Sen.Sip6.Src;
   ipa->ipa_mask.Sen.Sip6.Src = in6mask128;

   ipa->ipa_info.Sen.Sip6.Dst = ddst->Sen.Sip6.Dst;
   ipa->ipa_mask.Sen.Sip6.Dst = in6mask128;
  } else {
   ipa->ipa_info.Sen.Sip6.Src = ipo->ipo_addr.Sen.Sip6.Src;
   ipa->ipa_mask.Sen.Sip6.Src = ipo->ipo_mask.Sen.Sip6.Src;

   ipa->ipa_info.Sen.Sip6.Dst = ipo->ipo_addr.Sen.Sip6.Dst;
   ipa->ipa_mask.Sen.Sip6.Dst = ipo->ipo_mask.Sen.Sip6.Dst;
  }

  ipa->ipa_info.Sen.Sip6.Proto = ipo->ipo_addr.Sen.Sip6.Proto;
  ipa->ipa_mask.Sen.Sip6.Proto = ipo->ipo_mask.Sen.Sip6.Proto;

  if (ipo->ipo_mask.Sen.Sip6.Proto) {
   ipa->ipa_info.Sen.Sip6.Sport =
       ipo->ipo_addr.Sen.Sip6.Sport;
   ipa->ipa_mask.Sen.Sip6.Sport =
       ipo->ipo_mask.Sen.Sip6.Sport;
   ipa->ipa_info.Sen.Sip6.Dport =
       ipo->ipo_addr.Sen.Sip6.Dport;
   ipa->ipa_mask.Sen.Sip6.Dport =
       ipo->ipo_mask.Sen.Sip6.Dport;
  }
  break;


 default:
  pool_put(&ipsec_acquire_pool, ipa);
  return 0;
 }

 timeout_add_sec(&ipa->ipa_timeout, ipsec_expire_acquire);

 do { (ipa)->ipa_next.tqe_next = ((void *)0); (ipa)->ipa_next.tqe_prev = (&ipsec_acquire_head)->tqh_last; *(&ipsec_acquire_head)->tqh_last = (ipa); (&ipsec_acquire_head)->tqh_last = &(ipa)->ipa_next.tqe_next; } while (0);
 do { (ipa)->ipa_ipo_next.tqe_next = ((void *)0); (ipa)->ipa_ipo_next.tqe_prev = (&ipo->ipo_acquires)->tqh_last; *(&ipo->ipo_acquires)->tqh_last = (ipa); (&ipo->ipo_acquires)->tqh_last = &(ipa)->ipa_ipo_next.tqe_next; } while (0);
 ipa->ipa_policy = ipo;


 return pfkeyv2_acquire(ipo, gw, laddr, &ipa->ipa_seq, ddst);
}




struct tdb *
ipsp_spd_inp(struct mbuf *m, int af, int hlen, int *error, int direction,
    struct tdb *tdbp, struct inpcb *inp, struct ipsec_policy *ipo)
{

 if (inp == ((void *)0))
  goto justreturn;



 if (inp->inp_seclevel[1] == 0x00 &&
     inp->inp_seclevel[2] == 0x00 &&
     inp->inp_seclevel[0] == 0x00)
  goto justreturn;

 if (inp->inp_seclevel[1] == 0x01 &&
     inp->inp_seclevel[2] == 0x01 &&
     inp->inp_seclevel[0] == 0x01)
  goto justreturn;

 *error = -22;
 return ((void *)0);

 justreturn:
 if (ipo != ((void *)0))
  return ipo->ipo_tdb;
 else
  return ((void *)0);
}





struct ipsec_acquire *
ipsec_get_acquire(u_int32_t seq)
{
 struct ipsec_acquire *ipa;

 for((ipa) = ((&ipsec_acquire_head)->tqh_first); (ipa) != ((void *)0); (ipa) = ((ipa)->ipa_next.tqe_next))
  if (ipa->ipa_seq == seq)
   return ipa;

 return ((void *)0);
}
