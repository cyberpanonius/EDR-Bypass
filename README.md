A compact C loader that proxies exported functions from the Sublime Text application. The loader is designed to load a generated C2 beacon file (e.g., Sliver); you can configure the loader to open the generated beacon. 
It is implemented as a DLL that mimics one of Sublime Text’s DLLs, enabling the application to sideload the loader (DLL side-loading).
The loader may also be adapted for other DLL side-loading scenarios by replacing the exported function stubs and selecting a suitable target binary.

Disclaimer!!
This project is for personal development and research. Please respect its intended philosophy and refrain from using it for harmful or illegal activities. I accept no responsibility for misuse.!!
