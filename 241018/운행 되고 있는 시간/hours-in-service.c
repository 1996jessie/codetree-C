#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start, end;
} Interval;

int compare(const void* a, const void* b) {
    Interval* intA = (Interval*)a;
    Interval* intB = (Interval*)b;
    return intA->start - intB->start;
}

int calculateTotalTime(Interval intervals[], int n) {
    if (n == 0) return 0;

    qsort(intervals, n, sizeof(Interval), compare);
    
    int totalTime = 0;
    int currentStart = intervals[0].start;
    int currentEnd = intervals[0].end;
    
    for (int i = 1; i < n; i++) {
        if (intervals[i].start <= currentEnd) {
            if (intervals[i].end > currentEnd) {
                currentEnd = intervals[i].end;
            }
        } else {
            totalTime += currentEnd - currentStart;
            currentStart = intervals[i].start;
            currentEnd = intervals[i].end;
        }
    }
    
    totalTime += currentEnd - currentStart;
    
    return totalTime;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    Interval intervals[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &intervals[i].start, &intervals[i].end);
    }
    
    int maxTime = 0;
    
    for (int i = 0; i < n; i++) {
        Interval remainingIntervals[n - 1];
        int index = 0;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                remainingIntervals[index++] = intervals[j];
            }
        }

        int totalTime = calculateTotalTime(remainingIntervals, n - 1);
        if (totalTime > maxTime) {
            maxTime = totalTime;
        }
    }

    printf("%d\n", maxTime);
    
    return 0;
}