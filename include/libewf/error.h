/*
 * The error code definitions for libewf
 *
 * Copyright (c) 2008, Joachim Metz <forensics@hoffmannbv.nl>,
 * Hoffmann Investigations. All rights reserved.
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEWF_ERROR_H )
#define _LIBEWF_ERROR_H

/* libewf uses the same error codes as libuna
 * this allows libewf to pass libuna directly
 */

/* External error type definition hides internal structure
 */
typedef intptr_t libewf_error_t;

/* The error domains
 */
enum LIBEWF_ERROR_DOMAINS
{
	LIBEWF_ERROR_DOMAIN_ARGUMENTS                = (int) 'a',
	LIBEWF_ERROR_DOMAIN_CONVERSION               = (int) 'c',
	LIBEWF_ERROR_DOMAIN_COMPRESSION              = (int) 'C',
	LIBEWF_ERROR_DOMAIN_IO                       = (int) 'I',
	LIBEWF_ERROR_DOMAIN_INPUT                    = (int) 'i',
	LIBEWF_ERROR_DOMAIN_MEMORY                   = (int) 'm',
	LIBEWF_ERROR_DOMAIN_OUTPUT                   = (int) 'o',
	LIBEWF_ERROR_DOMAIN_RUNTIME                  = (int) 'r',
};

/* The argument error codes
 * to signify errors regarding arguments passed to a function
 */
enum LIBEWF_ARGUMENT_ERROR
{
	LIBEWF_ARGUMENT_ERROR_GENERIC                = 0,

	/* The argument contains an invalid value
	 */
	LIBEWF_ARGUMENT_ERROR_INVALID_VALUE          = 1,

	/* The argument contains a value less than zero
	 */
	LIBEWF_ARGUMENT_ERROR_VALUE_LESS_THAN_ZERO   = 2,

	/* The argument contains a value zero or less
	 */
	LIBEWF_ARGUMENT_ERROR_VALUE_ZERO_OR_LESS     = 3,

	/* The argument contains a value that exceeds the maximum
	 * for the specific type
	 */
	LIBEWF_ARGUMENT_ERROR_VALUE_EXCEEDS_MAXIMUM   = 4,

	/* The argument contains a value that is too small
	 */
	LIBEWF_ARGUMENT_ERROR_VALUE_TOO_SMALL        = 5,

	/* The argument contains a value that is too large
	 */
	LIBEWF_ARGUMENT_ERROR_VALUE_TOO_LARGE        = 6,

	/* The argument contains a value that is out of range
	 */
	LIBEWF_ARGUMENT_ERROR_VALUE_OUT_OF_RANGE     = 7,

	/* The argument contains a value that is not supported
	 */
	LIBEWF_ARGUMENT_ERROR_UNSUPPORTED_VALUE      = 8,

	/* The argument contains a value that conficts with another argument
	 */
	LIBEWF_ARGUMENT_ERROR_CONFLICTING_VALUE      = 9
};

/* The conversion error codes
 * to signify errors regarding conversions
 */
enum LIBEWF_CONVERSION_ERROR
{
	LIBEWF_CONVERSION_ERROR_GENERIC              = 0,

	/* The conversion failed on the input
	 */
	LIBEWF_CONVERSION_ERROR_INPUT_FAILED         = 1,

	/* The conversion failed on the output
	 */
	LIBEWF_CONVERSION_ERROR_OUTPUT_FAILED        = 2
};

/* The compression error codes
 * to signify errors regarding compression
 */
enum LIBEWF_COMPRESSION_ERROR
{
	LIBEWF_COMPRESSION_ERROR_GENERIC             = 0,

	/* The compression failed
	 */
	LIBEWF_COMPRESSION_ERROR_COMPRESS_FAILED     = 1,

	/* The de/uncompression failed
	 */
	LIBEWF_COMPRESSION_ERROR_UNCOMPRESS_FAILED   = 2
};

/* The input/output error codes
 * to signify errors regarding input/output
 */
enum LIBEWF_IO_ERROR
{
	LIBEWF_IO_ERROR_GENERIC                      = 0,

	/* The open failed
	 */
	LIBEWF_IO_ERROR_OPEN_FAILED                  = 1,

	/* The close failed
	 */
	LIBEWF_IO_ERROR_CLOSE_FAILED                 = 2,

	/* The seek failed
	 */
	LIBEWF_IO_ERROR_SEEK_FAILED                  = 3,

	/* The read failed
	 */
	LIBEWF_IO_ERROR_READ_FAILED                  = 4,

	/* The write failed
	 */
	LIBEWF_IO_ERROR_WRITE_FAILED                 = 5,
};

/* The input error codes
 * to signify errors regarding handing input data
 */
enum LIBEWF_INPUT_ERROR
{
	LIBEWF_INPUT_ERROR_GENERIC                   = 0,

	/* The input contains invalid data
	 */
	LIBEWF_INPUT_ERROR_INVALID_DATA              = 1,

	/* The input contains an unsupported signature
	 */
	LIBEWF_INPUT_ERROR_SIGNATURE_MISMATCH        = 2,

	/* A CRC in the input did not match
	 */
	LIBEWF_INPUT_ERROR_CRC_MISMATCH              = 3,

	/* A value in the input did not match a previously
	 * read value or calculated value
	 */
	LIBEWF_INPUT_ERROR_VALUE_MISMATCH            = 4,

	/* The last segment file is missing from the input
	 */
	LIBEWF_INPUT_ERROR_MISSING_LAST_SEGMENT_FILE = 5,

	/* The last section is missing from the input
	 */
	LIBEWF_INPUT_ERROR_MISSING_LAST_SECTION      = 6
};

/* The memory error codes
 * to signify errors regarding memory
 */
enum LIBEWF_MEMORY_ERROR
{
	LIBEWF_MEMORY_ERROR_GENERIC                  = 0,

	/* There is insufficient memory available
	 */
	LIBEWF_MEMORY_ERROR_INSUFFICIENT             = 1,

	/* The memory failed to be copied
	 */
	LIBEWF_MEMORY_ERROR_COPY_FAILED              = 2,

	/* The memory failed to be set
	 */
	LIBEWF_MEMORY_ERROR_SET_FAILED               = 3
};

/* The runtime error codes
 * to signify errors regarding runtime processing
 */
enum LIBEWF_RUNTIME_ERROR
{
	LIBEWF_RUNTIME_ERROR_GENERIC                 = 0,

	/* The value is missing
	 */
	LIBEWF_RUNTIME_ERROR_VALUE_MISSING           = 1,

	/* The value was already set
	 */
	LIBEWF_RUNTIME_ERROR_VALUE_ALREADY_SET       = 2,

	/* The creation and/or initialization of an internal structure failed
	 */
	LIBEWF_RUNTIME_ERROR_INITIALIZE_FAILED       = 3,

	/* The resize of an internal structure failed
	 */
	LIBEWF_RUNTIME_ERROR_RESIZE_FAILED           = 4,

	/* The free of an internal structure failed
	 */
	LIBEWF_RUNTIME_ERROR_FREE_FAILED             = 5,

	/* The value could not be determined
	 */
	LIBEWF_RUNTIME_ERROR_GET_FAILED              = 6,

	/* The value could not be set
	 */
	LIBEWF_RUNTIME_ERROR_SET_FAILED              = 7,

	/* The value could not be appended/prepended
	 */
	LIBEWF_RUNTIME_ERROR_APPEND_FAILED           = 8,

	/* The value could not be copied
	 */
	LIBEWF_RUNTIME_ERROR_COPY_FAILED             = 9,

	/* The value could not be removed
	 */
	LIBEWF_RUNTIME_ERROR_REMOVE_FAILED           = 10,

	/* The value was out of range
	 */
	LIBEWF_RUNTIME_ERROR_VALUE_OUT_OF_RANGE      = 11,

	/* The value exceeds the maximum for its specific type
	 */
	LIBEWF_RUNTIME_ERROR_VALUE_EXCEEDS_MAXIMUM   = 12,

	/* The value is unsupported
	 */
	LIBEWF_RUNTIME_ERROR_UNSUPPORTED_VALUE       = 13
};

/* The output error codes
 */
enum LIBEWF_OUTPUT_ERROR
{
	LIBEWF_OUTPUT_ERROR_GENERIC                  = 0
};

#endif

