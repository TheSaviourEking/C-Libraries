Use quick_run.sh to quickly preview the library. This will run the program in a virtual shell and show you the result.
Or you should manually run the following commands locally in the project directory

```shell
#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./lib
./math && ./math2
# ./math2
echo $LD_LIBRARY_PATH
```
