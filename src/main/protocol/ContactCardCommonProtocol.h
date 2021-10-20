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

namespace keyple {
namespace core {
namespace util {

/**
 * This enum contains a non-exhaustive list of contacts smartcard communication protocols.
 *
 * @since 2.0.0
 */
enum class ContactCardCommonProtocol {
    /* Contact ISO standard */
    ISO_7816_3,
    ISO_7816_3_T0,
    ISO_7816_3_T1,

    /* Contact proprietary old Calypso SAM */
    INNOVATRON_HIGH_SPEED_PROTOCOL_SAM
};

}
}
}
