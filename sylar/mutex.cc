/**
 * @file mutex.cc
 * @brief 信号量实现
 * @version 0.1
 * @date 2021-06-09
 */

#include "mutex.h"

namespace sylar {

Semaphore::Semaphore(uint32_t count) {
    sem_init(&m_semaphore, 0, count);
}

Semaphore::~Semaphore() {
    sem_destroy(&m_semaphore);
}

void Semaphore::wait() {
    sem_wait(&m_semaphore);
}

void Semaphore::notify() {
    sem_post(&m_semaphore); 
}

} // namespace sylar
