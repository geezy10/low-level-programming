# 0 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
# 1 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/cmake-build-debug//"
# 0 "<eingebaut>"
# 0 "<Kommandozeile>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<Kommandozeile>" 2
# 1 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
# 1 "/usr/include/assert.h" 1 3 4
# 35 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 415 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 19 "/usr/include/bits/timesize.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 20 "/usr/include/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 416 "/usr/include/features.h" 2 3 4
# 524 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 730 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 731 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 732 "/usr/include/sys/cdefs.h" 2 3 4
# 525 "/usr/include/features.h" 2 3 4
# 548 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 549 "/usr/include/features.h" 2 3 4
# 36 "/usr/include/assert.h" 2 3 4
# 64 "/usr/include/assert.h" 3 4

# 64 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     noexcept (true) __attribute__ ((__noreturn__)) __attribute__ ((__cold__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     noexcept (true) __attribute__ ((__noreturn__)) __attribute__ ((__cold__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     noexcept (true) __attribute__ ((__noreturn__)) __attribute__ ((__cold__));


}
# 2 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 2
# 1 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/queue.h" 1


# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 145 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 425 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 3 4
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 4 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/queue.h" 2


# 5 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/queue.h"
template<class T, size_t size = 16>
class Queue {
public:
    Queue() : head(0), tail(0), count(0) {

    }

    bool put(const T &t) {

        if (count == size) {
            return false;
        }
        buffer[tail] = t;
        tail = (tail+1)%size;
        count++;
        return true;
    }

    bool get(T &t) {

        if (count == 0) {
            return false;
        }
        t = buffer[head];
        head = (head+1)%size;
        count--;
        return true;
    }

    bool empty() {

        return count == 0;
    }

private:
    size_t head;
    size_t tail;
    size_t count;
    T buffer[size];
};
# 3 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 2

int main() {
    Queue<int> q;
    int v;
    
# 7 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   (static_cast <bool> (
# 7 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   q.empty()
# 7 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   ) ? void (0) : __assert_fail (
# 7 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   "q.empty()"
# 7 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   , __builtin_FILE (), __builtin_LINE (), __extension__ __PRETTY_FUNCTION__))
# 7 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
                    ;
    q.put(1);
    q.put(2);
    
# 10 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   (static_cast <bool> (
# 10 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   !q.empty()
# 10 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   ) ? void (0) : __assert_fail (
# 10 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   "!q.empty()"
# 10 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   , __builtin_FILE (), __builtin_LINE (), __extension__ __PRETTY_FUNCTION__))
# 10 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
                     ;
    
# 11 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   (static_cast <bool> (
# 11 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   q.get(v) && v == 1
# 11 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   ) ? void (0) : __assert_fail (
# 11 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   "q.get(v) && v == 1"
# 11 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   , __builtin_FILE (), __builtin_LINE (), __extension__ __PRETTY_FUNCTION__))
# 11 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
                             ;
    
# 12 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   (static_cast <bool> (
# 12 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   !q.empty()
# 12 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   ) ? void (0) : __assert_fail (
# 12 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   "!q.empty()"
# 12 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   , __builtin_FILE (), __builtin_LINE (), __extension__ __PRETTY_FUNCTION__))
# 12 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
                     ;
    
# 13 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   (static_cast <bool> (
# 13 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   q.get(v) && v == 2
# 13 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   ) ? void (0) : __assert_fail (
# 13 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   "q.get(v) && v == 2"
# 13 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   , __builtin_FILE (), __builtin_LINE (), __extension__ __PRETTY_FUNCTION__))
# 13 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
                             ;
    
# 14 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   (static_cast <bool> (
# 14 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   q.empty()
# 14 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   ) ? void (0) : __assert_fail (
# 14 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
   "q.empty()"
# 14 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp" 3 4
   , __builtin_FILE (), __builtin_LINE (), __extension__ __PRETTY_FUNCTION__))
# 14 "/home/elias/Dokumente/FH/Semester_4/HNP/exercise/UE01_HuberThomas/main.cpp"
                    ;
    return 0;
}
