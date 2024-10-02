#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct WeatherForecast {
    char date[11];
    char day[4];
    char weather[10]; 
};

int compare_dates(const char* date1, const char* date2) {
    return strcmp(date1, date2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    struct WeatherForecast forecasts[100];
    struct WeatherForecast closestRain; 
    int foundRain = 0; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", forecasts[i].date, forecasts[i].day, forecasts[i].weather);
    }

    for (int i = 0; i < n; i++) {
        if (strcmp(forecasts[i].weather, "Rain") == 0) {
            if (!foundRain || compare_dates(forecasts[i].date, closestRain.date) < 0) {
                closestRain = forecasts[i]; 
                foundRain = 1;
            }
        }
    }

    printf("%s %s %s\n", closestRain.date, closestRain.day, closestRain.weather);

    return 0;
}