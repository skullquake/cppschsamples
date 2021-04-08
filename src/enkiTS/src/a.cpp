#include"TaskScheduler.h"
#include<chrono>
#include<thread>
enki::TaskScheduler g_TS;
int main(int argc,const char*argv[]){
	g_TS.Initialize();
	enki::TaskSet task(1,[](enki::TaskSetPartition range_,uint32_t threadnum_){
	});
	g_TS.AddTaskSetToPipe(&task);
	g_TS.WaitforTask(&task);
	return 0;
}
