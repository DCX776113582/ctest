# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 170 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.c" 2








# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 39 "/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 231 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen");

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs") ;
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen") ;
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite") ;
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 296 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
# 315 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");
# 337 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 348 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 374 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 452 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 492 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 493 "/usr/include/stdio.h" 2 3 4
# 10 "main.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror") ;
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 187 "/usr/include/string.h" 2 3 4
# 11 "main.c" 2
# 1 "./fruits club.h" 1
# 14 "./fruits club.h"
void ADD();
void MODIFIED();
void SEARCH();
void DELETE();
void PRINT();
void fruits();
# 12 "main.c" 2
#pragma pack(4)

enum weekday{Mon = 1,Tue,Wed,Thur,Fri,Sat,Sun};
void test1_01()
{


    enum weekday day;
    printf("请输入你选择的周期时间(1~7):");
    scanf("%d",&day);
    switch (day) {
        case Mon:
            puts("出发");
            break;
        case Tue:
            puts("战队");
            break;
        case Wed:
            puts("银河");
            break;
        case Thur:
            puts("超人");
            break;
        case Fri:
            puts("火焰");
            break;
        case Sat:
            puts("艾克斯");
            break;
        case Sun:
            puts("放假");
            break;
        default:puts("输入错误");
            break;
    }

}
typedef int (*FPOINTER)(int, int);
FPOINTER fpointer;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    return a / b;
}
int rem(int a, int b)
{
    return a % b;
}
int result(int(*fp)(int,int),int a,int b)
{
    return (*fp)(a,b);
}
void jisuanqi()
{
    int number1;
    int number2;
    char operator;
    int r = 0;
    printf("请输入两个数据：\n");
    printf("number1:");
    scanf("%d",&number1);
    printf("number2:");
    scanf("%d",&number2);
    printf("请输入两个数据的运算符（+ - * / %%）:");
    getchar();
    scanf("%c",&operator);
    switch (operator) {
        case '+':{
            fpointer = &add;
            r = result(fpointer,number1,number2);
            break;
        }
        case '-':{
            fpointer = &sub;
            r = result(fpointer,number1,number2);
            break;
        }
        case '*':{
            fpointer = &mul;
            r = result(fpointer,number1,number2);
            break;
        }
        case '/':{
            fpointer = &divi;
            r = result(fpointer,number1,number2);
            break;
        }
        case '%':{
            fpointer = &rem;
            r = result(fpointer,number1,number2);
            break;
        }
        default:{
            printf("运算操作符输入无效\n");
            break;
        }
    }
    printf("%d%c%d运算结果为:%d\n",number1,operator,number2,r);
}
enum Rider{Kuuga = 1,Agito,Ruki,Faiz,Blade,Hibiki,Kabuto,Den_o,Kiva,Decade,Double,OOO,Fourze,Wizard,Gaim,Drive,Ghost,EX_Aid,Build};






enum OS{iOS = 1,Androud,Whone,Other};
enum Brand{iphone = 1,samsung,nokia,Baidu_cloud};
void test1()
{
    char * ios = "iOS";
    char * And = "Androud";
    char * Wh = "Whone";
    char * ot = "Other";
    enum Brand brand;
    printf("请输入品牌代码：");
    scanf("%d",&brand);
    int i;
    float sum;
    switch (brand) {
        case iphone:
            printf("请输入个数：");
            int b = 8888;float f = 0.9f;
            scanf("%d",&i);
            sum = i*b*f;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",ios,i,b,sum);
            break;
        case samsung:
            printf("请输入个数：");
            int b2 = 7999;float f2 = 0.8f;
            scanf("%d",&i);
            sum = i*b2*f2;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",And,i,b2,sum);
            break;
        case nokia:
            printf("请输入个数：");
            int b3 = 2888;float f3 = 0.75f;
            scanf("%d",&i);
            sum = i*b3*f3;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",Wh,i,b3,sum);
            break;
        case Baidu_cloud:
            printf("请输入个数：");
            int b4 = 1999;float f4 = 0.5f;
            scanf("%d",&i);
            sum = i*b4*f4;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",ot,i,b4,sum);
            break;

        default:puts("输入有误");
            break;
    }
}
void test1_1()
{
    enum OS{iOS = 1,Androud,Whone,Other};
    enum OS myPhone;
    int number;
    const double price[4] = {8888,7999,2888,1999};
    const double discount[4] = {0.9,0.8,0.75,0.5};
    static double sumPrice = 0;
    double myPhonePrice;
    static int count = 1;
    char yes = 'y';
    do{
    puts("手机品牌号码如下");
    puts("1号：苹果手机(iOS)");
    puts("2号：三星手机(Androud)");
    puts("3号：诺基亚手机(Whone)");
    puts("4号：百度云手机(Other)");
    printf("请选择号码：");
    scanf("%d",&myPhone);
    printf("您要买几部：");
    scanf("%d",&number);
    printf("******************购买商品%d信息：******************\n",count);
    printf("手机品牌\t手机系统\t数量\t单价\t\t折扣\t\t总价\n");
    switch (myPhone) {
        case 1:{
            myPhonePrice = price[0]*discount[0]*number;
            printf("苹果手机\tiOS\t\t%2d\t%5.2f\t%5.2f\t%.2f\n",number,price[0],discount[0],myPhonePrice);
            break;
        }
        case 2:{
            myPhonePrice = price[1]*discount[1]*number;
            printf("三星手机 Android %2d %5.2f %5.2f %.2f\n",number,price[1],discount[1],myPhonePrice);
            break;
        }
        case 3:{
            myPhonePrice = price[2]*discount[2]*number;
            printf("诺基亚手机 WPhone %2d %5.2f %5.2f %.2f\n",number,price[2],discount[2],myPhonePrice);
            break;
        }
        case 4:{
            myPhonePrice = price[3]*discount[3]*number;
            printf("百度云手机 Other %2d %5.2f %5.2f %.2f",number,price[3],discount[3],myPhonePrice);
            break;
        }
        default:
            printf("对不起，输入信息错误，此商品不存在！\n");
            break;
    }
        sumPrice+= myPhonePrice;
        myPhonePrice = 0;
        printf("************************************\n");
        printf("购买商品总价为：%.2f\n",sumPrice);
        getchar();
        printf("是否继续购买？(y或按任意键结束):");
        scanf("%c",&yes);
        if (yes == 'Y'||yes == 'y') {
            count++;
        }
        else
        {
            break;
        }
    }while(1);
}
struct student {
    long id;
    char name[10];
    double score;
};
typedef struct student SDU;
void printstudent(SDU s)
{
    printf("ID:%ld\tNAME:%s\tSCORE:%.2lf\n",s.id,s.name,s.score);
}
void test02()
{
    struct fraction
    {
        int numerator;
        int denominator;
    };

    struct fraction f1 = {1,2};

    printf("%d/%d\n",f1.numerator,f1.denominator);

    SDU s1 = {1001,"sanyuan",99.9};
    puts("学生1信息：");

    printstudent(s1);
    SDU s2;
    s2.id = 1002;
    __builtin___strcpy_chk (s2.name, "kuuga", __builtin_object_size (s2.name, 2 > 1 ? 1 : 0));
    s2.score = 100.00;
    puts("学生2信息：");

    printstudent(s2);
    SDU s3;
    printf("id:");
    scanf("%ld",&s3.id);
    printf("name:");
    scanf("%s",s3.name);
    printf("score:");
    scanf("%lf",&s3.score);
    puts("学生3信息：");

    printstudent(s3);

}

struct iphone
{
    int ID;
    char os[10];
    char brand[20];
    double price;
    int i;
    float discount;
    double total;
};
typedef struct iphone PHONE;
PHONE p1 = {1,"iOS","苹果手机",8888,0.9,8888*0.9};
PHONE p2 = {2,"Andourd","三星手机",7999,0.8,7999*0.8};
PHONE p3 = {3,"Whone","诺基亚手机",2888,0.75,2888*0.75};
PHONE p4 = {4,"Other","百度云手机",1999,0.5,1999*0.5};
void prt(PHONE s)
{
    printf("%d\t%s\t%s\t%.2lf\t%d\t%.2f\t%.2lf\n",s.ID,s.os,s.brand,s.price,s.i,s.discount,s.total);
}
void test2()
{
    enum OS{iOS = 1,Androud,Whone,Other};
    enum OS myPhone;
    int count = 0;
    static double sum = 0;
    double sumall = 0.0;
    char yes = 'y';
    const double price[4] = {8888,7999,2888,1999};
    const double dis[4] = {0.9,0.8,0.75,0.5};
    do{
        puts("手机品牌号码如下");
        puts("1号：苹果手机(iOS)");
        puts("2号：三星手机(Androud)");
        puts("3号：诺基亚手机(Whone)");
        puts("4号：百度云手机(Other)");
        printf("请输入商品编号：");
        scanf("%d",&myPhone);
        switch (myPhone) {
            case iOS:
                printf("请输入商品数量：");
                scanf("%d",&p1.i);
                static int s1 = 0;
                s1+=p1.i;
                p1.i=s1;
                sumall = price[0]*dis[0]*p1.i;
                p1.total=sumall;
                prt(p1);
                break;
            case Androud:
                printf("请输入商品数量：");
                scanf("%d",&p2.i);
                static int s2 = 0;
                s2+=p2.i;
                p2.i=s2;
                sumall = price[1]*dis[1]*p2.i;
                p2.total=sumall;
                prt(p2);
                break;
            case Whone:
                printf("请输入商品数量：");
                scanf("%d",&p3.i);
                static int s3 = 0;
                s3+=p3.i;
                p3.i=s3;
                sumall = price[2]*dis[2]*p3.i;
                p3.total=sumall;
                prt(p3);
                break;
            case Other:
                printf("请输入商品数量：");
                scanf("%d",&p4.i);
                static int s4 = 0;
                s4+=p4.i;
                p4.i=s4;
                sumall = price[3]*dis[3]*p4.i;
                p4.total=sumall;
                prt(p4);
                break;
            default:puts("输入有误");
                break;
    }

        sum+= sumall;
        sumall = 0;
            getchar();
    printf("是否继续购买？(y或按任意键结束):");
    scanf("%c",&yes);
    if (yes == 'Y'||yes == 'y') {
        count = p1.i+p2.i+p3.i+p4.i;
    }
    else
    {
        count = p1.i+p2.i+p3.i+p4.i;
        break;
    }
    }while (1);
    printf("******************购买商品信息：******************\n");
    puts("手机编号\t手机系统\t手机品牌\t单价\t数量\t\t折扣\t\t总价");
    prt(p1);
    prt(p2);
    prt(p3);
    prt(p4);
    printf("*************************************************\n");
    printf("共购买%d部手机\n购买商品总价为：%.2f\n",count,sum);
}
typedef struct
{
    int a;
    int b;
    double c;
} STU;
void test3()
{
    int a[3];
    printf("%p\n",&a[0]);
    printf("%p\n",a);
    printf("%p\n",&a);

    PHONE s;
    printf("%p\n",&s);
    printf("%p\n",&s.ID);

    PHONE * q;
    q = &p2;



    __builtin___memcpy_chk (&p1, &p2, sizeof(PHONE), __builtin_object_size (&p1, 0));
    prt(p1);
    prt(p2);






}
typedef struct
{

    char a;
    char c;
    int b;
    int g;
    double d;
} MON;







void test03()
{
    typedef union
    {
        char a[10];
        char a1;
        char c;
        int b;
        int g;
        double d;
    } Mo;
    Mo q;
    Mo * p = &q;
    q.b = 4;
    printf("%d\n",p->b);
    __builtin___strcpy_chk (q.a, "kai!jjjq", __builtin_object_size (q.a, 2 > 1 ? 1 : 0));
    printf("%s\n",p->a);
    q.c = 'K';
    printf("%c\n",p->c);
    printf("%s\n",p->a);
}
void test4()
{
    typedef union {
        short value;
        char c;
    }Test;
    Test t;
    t.value = 0x1234;
    printf("%p\n",&t.value);
    printf("%c\n",t.c);
    if (t.c == 0x12)
    {
        printf("大端机\n");
    }else if(t.c == 0x34)
    {
        printf("小端机\n");
    }
}



void test_1()
{
    typedef enum {Beijing = 1,Shanghai,guangzhou} PLACE;
    printf("%d %d %d\n",Beijing,Shanghai,guangzhou);
}
# 496 "main.c"
void test_2()
{
    typedef enum {不确定UNCERTAIN=-1,假FALSE, 真TRUE} ERL;
    ERL t;
    printf("请输入一个整型数据：");
    scanf("%d",&t);
    if (1==t) {
        printf("%d\n",真TRUE);
    }
    else if (0==t)
    {
        printf("%d\n",假FALSE);
        }
    else if(-1==t)
    {
        printf("%d\n",不确定UNCERTAIN);
    }
    else
    {puts("出错");}
}
# 634 "main.c"
typedef struct{
    char name[10];
    int id;
    double score;
}STD;
STD students[10];
double aver(double scores)
{
    return scores/10;
}
void test_5()
{
    char * Name[] = {"kuuga","agito","ruki","faiz","blade","hibiki","kabuto","den_o","kiva","decade"};
    int id[10]={2001,2002,2003,2004,2005,2006,2007,2008,2009,2010};
    double average = 0;
    double ave;
    for (int i = 0; i<10; ++i) {
        __builtin___strcpy_chk (students[i].name, Name[i], __builtin_object_size (students[i].name, 2 > 1 ? 1 : 0));
        students[i].id = id[i];
        printf("第%d个学生的成绩：",i+1);
        scanf("%lf",&students[i].score);
        average+=students[i].score;
    }
    ave = aver(average);
    for (int i = 0; i<10; ++i) {
        printf("%s\t%d\t%lf\n",students[i].name,students[i].id,students[i].score);
    }
    printf("average = %lf\n",ave);
    STD max;
    max = students[0];
    printf("NO.1:\n");
    for (int i = 1; i<10; ++i) {
        if (max.score<=students[i].score) {
            STD is;
            is = students[i];
            students[i] = max;
            max = is;
            printf("%s\t%d\t%lf\n",max.name,max.id,max.score);
        }
    }
}


void test_6()
{
    enum MONTH{January = 1,February,March,April,May,June,July,August,September,October,November,December};
    typedef struct{
        int year;
        int month;
        int day;
        int days;
    }DAY;
    DAY days;
    DAY * p = &days;
    int i;
    printf("请输入年份：");
    scanf("%d",&p->year);
    printf("请输入月份：");
    scanf("%d",&p->month);
    printf("请输入天数：");
    scanf("%d",&p->day);
    if(p->day<=31){
    if ((p->year%400==0)||((p->year%4==0)&&(p->year%100!=0))) {
        i = 29;
        puts("闰年");
    }
    else{
        i = 28;
        puts("平年");
    }
    switch (p->month) {
        case January:
            p->days = p->day;
            break;
        case February:
            p->days = p->day+31;
            break;
        case March:
            p->days = p->day+i+31;
            break;
        case April:
            p->days = p->day+i+31*2;
            break;
        case May:
            p->days = p->day+i+31*2+30;
            break;
        case June:
            p->days = p->day+i+31*3+30;
            break;
        case July:
            p->days = p->day+i+31*3+30*2;
            break;
        case August:
            p->days = p->day+i+31*4+30*2;
            break;
        case September:
            p->days = p->day+i+31*5+30*2;
            break;
        case October:
            p->days = p->day+i+31*5+30*3;
            break;
        case November:
            p->days = p->day+i+31*6+30*3;
            break;
        case December:
            p->days = p->day+i+31*6+30*4;
            break;
        default:puts("错误！");
            break;
        }
    }
    printf("今天是第%d天\n",p->days);
}
int main(int argc, const char * argv[]) {


    fruits();
    return 0;
}
