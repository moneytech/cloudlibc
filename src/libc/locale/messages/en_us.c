// Copyright (c) 2015-2016 Nuxi, https://nuxi.nl/
//
// This file is distributed under a 2-clause BSD license.
// See the LICENSE file for details.

#include <common/locale.h>

#include <errno.h>
#include <netdb.h>
#include <regex.h>
#include <signal.h>

const struct lc_messages __messages_en_us = {
    .yesexpr = "^[yY]",
    .noexpr = "^[nN]",

    .gai_strerror =
        {
                [0] = "Success",
                [EAI_AGAIN] = "Temporary failure in name resolution",
                [EAI_BADFLAGS] = "Invalid value for ai_flags",
                [EAI_FAIL] = "Non-recoverable failure in name resolution",
                [EAI_FAMILY] = "ai_family not supported",
                [EAI_MEMORY] = "Memory allocation failure",
                [EAI_NONAME] = "hostname nor servname provided, or not known",
                [EAI_SERVICE] = "servname not supported for ai_socktype",
                [EAI_SOCKTYPE] = "ai_socktype not supported",
                [EAI_SYSTEM] = "System error returned in errno",
                [EAI_OVERFLOW] = "Argument buffer overflow",
        },

    .regerror =
        {
                [0] = "Success", [REG_BADBR] = "Content of \"\\{\\}\" invalid",
                [REG_BADPAT] = "Invalid regular expression",
                [REG_BADRPT] =
                    "'?', '*', or '+' not preceded by valid regular expression",
                [REG_EBRACE] = "\"\\{\\}\" imbalance",
                [REG_EBRACK] = "\"[]\" imbalance",
                [REG_ECOLLATE] = "Invalid collating element referenced",
                [REG_ECTYPE] = "Invalid character class type referenced",
                [REG_EESCAPE] = "Trailing backslash character in pattern",
                [REG_EPAREN] = "\"\\(\\)\" or \"()\" imbalance",
                [REG_ERANGE] = "Invalid endpoint in range expression",
                [REG_ESPACE] = "Out of memory",
                [REG_ESUBREG] = "Number invalid or in error",
                [REG_NOMATCH] = "Failed to match",
        },

    .strerror =
        {
                [0] = "Success",
                [E2BIG] = "Argument list too long",
                [EACCES] = "Permission denied",
                [EADDRINUSE] = "Address already in use",
                [EADDRNOTAVAIL] = "Can't assign requested address",
                [EAFNOSUPPORT] =
                    "Address family not supported by protocol family",
                [EAGAIN] = "Resource temporarily unavailable",
                [EALREADY] = "Operation already in progress",
                [EBADF] = "Bad file descriptor",
                [EBADMSG] = "Bad message",
                [EBUSY] = "Device busy",
                [ECANCELED] = "Operation canceled",
                [ECHILD] = "No child processes",
                [ECONNABORTED] = "Software caused connection abort",
                [ECONNREFUSED] = "Connection refused",
                [ECONNRESET] = "Connection reset by peer",
                [EDEADLK] = "Resource deadlock avoided",
                [EDESTADDRREQ] = "Destination address required",
                [EDOM] = "Numerical argument out of domain",
                [EDQUOT] = "Disc quota exceeded",
                [EEXIST] = "File exists",
                [EFAULT] = "Bad address",
                [EFBIG] = "File too large",
                [EHOSTUNREACH] = "No route to host",
                [EIDRM] = "Identifier removed",
                [EILSEQ] = "Illegal byte sequence",
                [EINPROGRESS] = "Operation now in progress",
                [EINTR] = "Interrupted system call",
                [EINVAL] = "Invalid argument",
                [EIO] = "Input/output error",
                [EISCONN] = "Socket is already connected",
                [EISDIR] = "Is a directory",
                [ELOOP] = "Too many levels of symbolic links",
                [EMFILE] = "Too many open files",
                [EMLINK] = "Too many links",
                [EMSGSIZE] = "Message too long",
                [EMULTIHOP] = "Multihop attempted",
                [ENAMETOOLONG] = "File name too long",
                [ENETDOWN] = "Network is down",
                [ENETRESET] = "Network dropped connection on reset",
                [ENETUNREACH] = "Network is unreachable",
                [ENFILE] = "Too many open files in system",
                [ENOBUFS] = "No buffer space available",
                [ENODEV] = "Operation not supported by device",
                [ENOENT] = "No such file or directory",
                [ENOEXEC] = "Exec format error",
                [ENOLCK] = "No locks available",
                [ENOLINK] = "Link has been severed",
                [ENOMEM] = "Cannot allocate memory",
                [ENOMSG] = "No message of desired type",
                [ENOPROTOOPT] = "Protocol not available",
                [ENOSPC] = "No space left on device",
                [ENOSYS] = "Function not implemented",
                [ENOTCAPABLE] = "Capabilities insufficient",
                [ENOTCONN] = "Socket is not connected",
                [ENOTDIR] = "Not a directory",
                [ENOTEMPTY] = "Directory not empty",
                [ENOTRECOVERABLE] = "State not recoverable",
                [ENOTSOCK] = "Socket operation on non-socket",
                [ENOTSUP] = "Operation not supported",
                [ENOTTY] = "Inappropriate ioctl for device",
                [ENXIO] = "Device not configured",
                [EOVERFLOW] = "Value too large to be stored in data type",
                [EOWNERDEAD] = "Previous owner died",
                [EPERM] = "Operation not permitted",
                [EPIPE] = "Broken pipe",
                [EPROTO] = "Protocol error",
                [EPROTONOSUPPORT] = "Protocol not supported",
                [EPROTOTYPE] = "Protocol wrong type for socket",
                [ERANGE] = "Result too large",
                [EROFS] = "Read-only file system",
                [ESPIPE] = "Illegal seek",
                [ESRCH] = "No such process",
                [ESTALE] = "Stale NFS file handle",
                [ETIMEDOUT] = "Operation timed out",
                [ETXTBSY] = "Text file busy",
                [EXDEV] = "Cross-device link",
        },

    .strsignal =
        {
                [0] = "Unknown signal",
                [SIGABRT] = "Abort trap",
                [SIGALRM] = "Alarm clock",
                [SIGBUS] = "Bus error",
                [SIGCHLD] = "Child exited",
                [SIGCONT] = "Continued",
                [SIGFPE] = "Floating point exception",
                [SIGHUP] = "Hangup",
                [SIGILL] = "Illegal instruction",
                [SIGINT] = "Interrupt",
                [SIGKILL] = "Killed",
                [SIGPIPE] = "Broken pipe",
                [SIGQUIT] = "Quit",
                [SIGSEGV] = "Segmentation fault",
                [SIGSTOP] = "Suspended (signal)",
                [SIGSYS] = "Bad system call",
                [SIGTERM] = "Terminated",
                [SIGTRAP] = "Trace/BPT trap",
                [SIGTSTP] = "Suspended",
                [SIGTTIN] = "Stopped (tty input)",
                [SIGTTOU] = "Stopped (tty output)",
                [SIGURG] = "Urgent I/O condition",
                [SIGUSR1] = "User defined signal 1",
                [SIGUSR2] = "User defined signal 2",
                [SIGVTALRM] = "Virtual timer expired",
                [SIGXCPU] = "Cputime limit exceeded",
                [SIGXFSZ] = "Filesize limit exceeded",
        },

    .unknown_error = "Unknown error",
};
