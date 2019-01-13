# 程序计时
import time


def wait():
    time.sleep(3.3)  # sleep 3.3s

    
start = time.perf_counter()
wait()
end = time.perf_counter()
print(end - start)




