/**************************************************************************************************
 * Copyright (c) 2021 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * See the NOTICE file(s) distributed with this work for additional information regarding         *
 * copyright ownership.                                                                           *
 *                                                                                                *
 * This program and the accompanying materials are made available under the terms of the Eclipse  *
 * Public License 2.0 which is available at http://www.eclipse.org/legal/epl-2.0                  *
 *                                                                                                *
 * SPDX-License-Identifier: EPL-2.0                                                               *
 **************************************************************************************************/

#pragma once

#include <memory>
#include <vector>

/* Util */
#include "KeypleUtilExport.h"

namespace keyple {
namespace core {
namespace util {
namespace bertlv {

/**
 * Represents a TAG as defined by the Basic Encoding Rules for ASN.1<br>
 * This implementation limits the tag size to 2.<br>
 * (ITU-T X.690 / ISO 8825)
 *
 * @since 2.0
 */
class KEYPLEUTIL_API Tag : public std::enable_shared_from_this<Tag> {
public:
    /**
     * The tag type
     *
     * @since 2.0
     */
    enum class TagType {
        PRIMITIVE,
        CONSTRUCTED
    };

    /**
     * The tag classes
     *
     * @since 2.0
     */
    enum class TagClass : uint8_t {
        UNIVERSAL = 0,
        APPLICATION,
        CONTEXT,
        PRIVATE
    };

public:
    /**
     * Creates a tag from its attributes.
     *
     * <p>
     *
     * @param tagNumber the tag value.
     * @param tagClass the tag class.
     * @param tagType constructed or primitive
     * @param tagSize the tag size (1 or 2)
   * @since 2.0
     */
    Tag(const int tagNumber, const TagClass tagClass, const TagType tagType,
        const int tagSize);

    /**
     * Create a tag from a binary stream.
     * <p>
     *
     * @param binary the byte array containing the TLV data
     * @param offset the start offset in the byte array
     * @throws IndexOutOfBoundsException if the offset is too large
   * @since 2.0
     */
    Tag(const std::vector<uint8_t>& binary, int offset);

    /**
     *
     */
    int getTagNumber() const;

    /**
     *
     */
    TagClass getTagClass() const;

    /**
     *
     */
    TagType getTagType() const;

    /**
     *
     */
    int getTagSize() const;

    /**
     *
     */
    bool operator==(const Tag& o) const;

    /**
     *
     */
    bool operator!=(const Tag& o) const;

    /**
     *
     */
    friend KEYPLEUTIL_API std::ostream& operator<<(std::ostream& os,
                                                   const Tag::TagClass& tc);
    /**
     *
     */
    friend KEYPLEUTIL_API std::ostream& operator<<(std::ostream& os,
                                                   const Tag::TagType& tt);

    /**
     *
     */
    friend KEYPLEUTIL_API std::ostream& operator<<(std::ostream& os,
                                                   const Tag& t);


private:
    /**
     *
     */
    int mTagNumber;

    /**
     *
     */
    TagClass mTagClass;

    /**
     *
     */
    TagType mTagType;

    /**
     *
     */
    int mTagSize;
};

}
}
}
}
