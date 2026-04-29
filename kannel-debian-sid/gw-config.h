/* gw-config.h.  Generated from gw-config.h.in by configure.  */
/* gw-config.h.in.  Generated from configure.in by autoheader.  */

/* enable cookie support for WSP */
#define ENABLE_COOKIES 1

/* Software name */
#define GW_NAME "Kannel"

/* Software version */
#define GW_VERSION "1.4.5"

/* Define to 1 if you have the `backtrace' function. */
#define HAVE_BACKTRACE 1

/* enable cassandra */
/* #undef HAVE_CASS */

/* Define to 1 if you have the <cassandra.h> header file. */
/* #undef HAVE_CASSANDRA_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the <ftw.h> header file. */
#define HAVE_FTW_H 1

/* gethostbyname variant 3 */
/* #undef HAVE_FUNC_GETHOSTBYNAME_R_3 */

/* gethostbyname variant 5 */
/* #undef HAVE_FUNC_GETHOSTBYNAME_R_5 */

/* gethostbyname variant 6 */
#define HAVE_FUNC_GETHOSTBYNAME_R_6 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Does <stdio.h> declare getopt()? */
/* #undef HAVE_GETOPT_IN_STDIO_H */

/* Does <unistd.h> declare getopt()? */
#define HAVE_GETOPT_IN_UNISTD_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* having gsoap */
/* #undef HAVE_GSOAP */

/* Define to 1 if you have the <hiredis/hiredis.h> header file. */
#define HAVE_HIREDIS_HIREDIS_H 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `bind' library (-lbind). */
/* #undef HAVE_LIBBIND */

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `mysqlclient' library (-lmysqlclient). */
#define HAVE_LIBMYSQLCLIENT 1

/* Define to 1 if you have the `mysqlclient_r' library (-lmysqlclient_r). */
/* #undef HAVE_LIBMYSQLCLIENT_R */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `pam' library (-lpam). */
#define HAVE_LIBPAM 1

/* Define to 1 if you have the `pcreposix' library (-lpcreposix). */
/* #undef HAVE_LIBPCREPOSIX */

/* Define to 1 if you have the `pq' library (-lpq). */
#define HAVE_LIBPQ 1

/* Define to 1 if you have the <libpq-fe.h> header file. */
#define HAVE_LIBPQ_FE_H 1

/* Define to 1 if you have the `resolv' library (-lresolv). */
#define HAVE_LIBRESOLV 1

/* Define to 1 if you have the `rt' library (-lrt). */
#define HAVE_LIBRT 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* enable SSL */
#define HAVE_LIBSSL 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Defined to 1 */
#define HAVE_MSSQL 1

/* enable mysql */
#define HAVE_MYSQL 1

/* Define to 1 if you have the <mysql/mysql.h> header file. */
#define HAVE_MYSQL_MYSQL_H 1

/* Define to 1 if you have the <mysql/mysql_version.h> header file. */
#define HAVE_MYSQL_MYSQL_VERSION_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* nftw */
#define HAVE_NFTW 1

/* Do we have OCIPing */
/* #undef HAVE_OCIPING */

/* Define to 1 if you have the <openssl/crypto.h> header file. */
#define HAVE_OPENSSL_CRYPTO_H 1

/* Define to 1 if you have the <openssl/err.h> header file. */
#define HAVE_OPENSSL_ERR_H 1

/* Define to 1 if you have the <openssl/hmac.h> header file. */
#define HAVE_OPENSSL_HMAC_H 1

/* Define to 1 if you have the <openssl/objects.h> header file. */
/* #undef HAVE_OPENSSL_OBJECTS_H */

/* Define to 1 if you have the <openssl/pem.h> header file. */
#define HAVE_OPENSSL_PEM_H 1

/* Define to 1 if you have the <openssl/rc5.h> header file. */
/* #undef HAVE_OPENSSL_RC5_H */

/* Define to 1 if you have the <openssl/rsa.h> header file. */
#define HAVE_OPENSSL_RSA_H 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
#define HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the <openssl/x509.h> header file. */
#define HAVE_OPENSSL_X509_H 1

/* Do we have Oracle */
/* #undef HAVE_ORACLE */

/* have libpcre */
/* #undef HAVE_PCRE */

/* Define to 1 if you have the <pcreposix.h> header file. */
/* #undef HAVE_PCREPOSIX_H */

/* Define to 1 if you have the `pcre_compile' function. */
/* #undef HAVE_PCRE_COMPILE */

/* Define to 1 if you have the <pcre.h> header file. */
/* #undef HAVE_PCRE_H */

/* enable postgresql */
#define HAVE_PGSQL 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* have pthread_rwlock_t */
#define HAVE_PTHREAD_RWLOCK 1

/* have pthread_spinlock_t */
#define HAVE_PTHREAD_SPINLOCK_T 1

/* enable redis */
#define HAVE_REDIS 1

/* regex */
#define HAVE_REGEX 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* enable libsdb */
/* #undef HAVE_SDB */

/* Define to 1 if you have the <sdb.h> header file. */
/* #undef HAVE_SDB_H */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
#define HAVE_SECURITY_PAM_APPL_H 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* have sempaphore */
#define HAVE_SEMAPHORE 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Defined if there is a socklen_t in <sys/socket.h> */
#define HAVE_SOCKLEN_T 1

/* enable sqlite2 */
/* #undef HAVE_SQLITE */

/* enable sqlite3 */
#define HAVE_SQLITE3 1

/* Define to 1 if you have the <sqlite3.h> header file. */
#define HAVE_SQLITE3_H 1

/* Define to 1 if you have the <sqlite.h> header file. */
/* #undef HAVE_SQLITE_H */

/* Define to 1 if you have the `srandom' function. */
#define HAVE_SRANDOM 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoq' function. */
#define HAVE_STRTOQ 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/ucontext.h> header file. */
#define HAVE_SYS_UCONTEXT_H 1

/* Use ucontext */
#define HAVE_UCONTEXT 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* enable WTLS */
/* #undef HAVE_WTLS_OPENSSL */

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* have __FUNCTION__ */
#define HAVE___FUNCTION__ 1

/* have __FUNC__ */
#define HAVE___FUNC__ 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* pcre version */
/* #undef LIBPCRE_VERSION */

/* sdb version */
/* #undef LIBSDB_VERSION */

/* use localtime in logs */
#define LOG_TIMESTAMP_LOCALTIME 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* enable lock contention info */
/* #undef MUTEX_STATS */

/* no assertions */
/* #undef NO_GWASSERT */

/* no sms */
/* #undef NO_SMS */

/* no wap */
/* #undef NO_WAP */

/* Name of package */
#define PACKAGE "Kannel"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* suffix */
#define SUFFIX ""

/* checking malloc */
/* #undef USE_GWMEM_CHECK */

/* native malloc */
#define USE_GWMEM_NATIVE 1

/* slow malloc */
/* #undef USE_GWMEM_SLOW */

/* keepalive */
#define USE_KEEPALIVE 1

/* Version number of package */
#define VERSION "1.4.5"

/* wml debug */
/* #undef WS_DEBUG */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif


/* If we're using GCC, we can get it to check format function arguments. */
#ifdef __GNUC__
    #define PRINTFLIKE(a,b) __attribute__((format(printf, a, b)))
#else
    #define PRINTFLIKE(a, b)
#endif

