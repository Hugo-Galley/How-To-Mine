REM
REM Example bat file for starting PhoenixMiner.exe to mine ETC
REM

setx GPU_FORCE_64BIT_PTR 0
setx GPU_MAX_HEAP_SIZE 100
setx GPU_USE_SYNC_OBJECTS 1
setx GPU_MAX_ALLOC_PERCENT 100
setx GPU_SINGLE_ALLOC_PERCENT 100

REM IMPORTANT: Replace the ETC address with your own ETC wallet address in the -wal option (Rig001 is the name of the rig)
PhoenixMiner.exe -pool ssl://eu1-etc.ethermine.org:5555 -wal 0x1aDcF07389b1F6605C44a7683c50A5243829A92C.Rig001 -coin etc
pause

