#include <stdio.h>
#include <unistd.h>

int main() {
    // RUID와 EUID를 가져옵니다.
    uid_t ruid = getuid();  // 실제 사용자 ID
    uid_t euid = geteuid(); // 효과적인 사용자 ID

    // 결과를 출력합니다.
    printf("Real User ID (RUID): %d\n", ruid);
    printf("Effective User ID (EUID): %d\n", euid);

    return 0;
}
