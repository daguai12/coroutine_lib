#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_
    
#include "fiber.h"
#include <vector>
#include <string>

namespace sylar{

class Scheduler
{
public:
    Scheduler(size_t threads = 1, bool use_caller = true, const std::string& name = "Scheduler");
    virtual ~Scheduler();

    // const std::string& getName() const {return m_name;}

public:
    // 获取正在运行的调度器
    static Scheduler* GetThis();

protected:
    // 设置正在运行的调度器
    void SetThis();

public:
    // 添加任务到任务队列
    void schedulerLock();
};

};

#endif
