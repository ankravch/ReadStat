
#include "readstat.h"

const char *readstat_error_message(readstat_error_t error_code) {
    if (error_code == READSTAT_OK)
        return NULL;

    if (error_code == READSTAT_ERROR_OPEN)
        return "Unable to open file";

    if (error_code == READSTAT_ERROR_READ)
        return "Unable to read from file";

    if (error_code == READSTAT_ERROR_MALLOC)
        return "Unable to allocate memory";

    if (error_code == READSTAT_ERROR_USER_ABORT)
        return "The parsing was aborted (callback returned non-zero value)";

    if (error_code == READSTAT_ERROR_PARSE)
        return "Invalid file, or file has unsupported features";

    if (error_code == READSTAT_ERROR_UNSUPPORTED_COMPRESSION)
        return "File has unsupported compression scheme";

    if (error_code == READSTAT_ERROR_UNSUPPORTED_CHARSET)
        return "File has an unsupported character set";

    if (error_code == READSTAT_ERROR_ROW_COUNT_MISMATCH)
        return "File did not contain the expected number of rows";

    if (error_code == READSTAT_ERROR_ROW_WIDTH_MISMATCH)
        return "A row in the file was not the expected length";

    if (error_code == READSTAT_ERROR_BAD_FORMAT_STRING)
        return "A provided format string could not be understood";

    if (error_code == READSTAT_ERROR_VALUE_TYPE_MISMATCH)
        return "A provided value was incompatible with the variable's declared type";

    if (error_code == READSTAT_ERROR_WRITE)
        return "Unable to write data";

    if (error_code == READSTAT_ERROR_SEEK)
        return "Unable to seek within file";

    if (error_code == READSTAT_ERROR_CONVERT)
        return "Unable to convert string to the requested encoding";

    if (error_code == READSTAT_ERROR_CONVERT_BAD_STRING)
        return "Unable to convert string to the requested encoding (invalid byte sequence)";

    if (error_code == READSTAT_ERROR_CONVERT_SHORT_STRING)
        return "Unable to convert string to the requested encoding (incomplete byte sequence)";

    if (error_code == READSTAT_ERROR_CONVERT_LONG_STRING)
        return "Unable to convert string to the requested encoding (output buffer too small)";

    if (error_code == READSTAT_ERROR_VALUE_OUT_OF_RANGE)
        return "A provided value was outside the range of representable values in the specified file format";

    if (error_code == READSTAT_ERROR_TAGGED_VALUES_NOT_SUPPORTED)
        return "The file format does not supported character tags for missing values";

    return "Unknown error";
}
