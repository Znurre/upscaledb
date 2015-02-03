/*
 * Copyright (C) 2005-2015 Christoph Rupp (chris@crupp.de).
 * All Rights Reserved.
 *
 * NOTICE: All information contained herein is, and remains the property
 * of Christoph Rupp and his suppliers, if any. The intellectual and
 * technical concepts contained herein are proprietary to Christoph Rupp
 * and his suppliers and may be covered by Patents, patents in process,
 * and are protected by trade secret or copyright law. Dissemination of
 * this information or reproduction of this material is strictly forbidden
 * unless prior written permission is obtained from Christoph Rupp.
 */

/*
 * Semantic versioning for hamsterdb
 *
 * @exception_safe: nothrow
 * @thread_safe: yes
 */

#ifndef HAM_VERSION_H
#define HAM_VERSION_H

#include "0root/root.h"

// Always verify that a file of level N does not include headers > N!

#ifndef HAM_ROOT_H
#  error "root.h was not included"
#endif

namespace hamsterdb {

/*
 * The version numbers
 *
 * @remark A change of the major revision means a significant update
 * with a lot of new features and API changes.
 * 
 * The minor version means a significant update without API changes, and the 
 * revision is incremented for each release with minor improvements only.
 *
 * The file version describes the version of the binary database format.
 * hamsterdb is neither backwards- nor forwards-compatible regarding file
 * format changes. 
 *
 * If a file was created with hamsterdb pro then the msb of the file version
 * is set. hamsterdb pro is able to open files created with hamsterdb (APL
 * version), but not vice versa.
 *
 * History of file versions:
 *   2.1.0: introduced the file version; version is 0
 *   2.1.3: new btree format, file format cleanups; version is 1
 *   2.1.4: new btree format for duplicate keys/var. length keys; version is 2
 *   2.1.5: new freelist; version is 3
 *   2.1.9: changes in btree node format; version is 4
 */
#define HAM_VERSION_MAJ     2
#define HAM_VERSION_MIN     1
#define HAM_VERSION_REV     9
#define HAM_FILE_VERSION    4
#define HAM_VERSION_STR     "2.1.9"

} // namespace hamsterdb

#endif /* HAM_VERSION_H */
