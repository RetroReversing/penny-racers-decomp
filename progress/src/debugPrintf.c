#define va_alist __builtin_va_alist
#define va_dcl int __builtin_va_alist; ...

void debugPrintf(va_alist)
va_dcl
{
}
