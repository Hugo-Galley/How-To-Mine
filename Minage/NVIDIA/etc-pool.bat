@echo off
:start
t-rex -a ethash --coin etc -o stratum+tcp://etc.2miners.com:1010 -u 0xFAfCD2fa27ce1C05f1fFA68f1034327D20B70D2C.PC_HUGO -p x --fork-at etchash=epoch:390
goto start
pause