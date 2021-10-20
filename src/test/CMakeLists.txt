# *************************************************************************************************
# Copyright (c) 2021 Calypso Networks Association                                                 *
# https://www.calypsonet-asso.org/                                                                *
#                                                                                                 *
# See the NOTICE file(s) distributed with this work for additional information regarding          *
# copyright ownership.                                                                            *
#                                                                                                 *
# This program and the accompanying materials are made available under the terms of the Eclipse   *
# Public License 2.0 which is available at http://www.eclipse.org/legal/epl-2.0                   *
#                                                                                                 *
# SPDX-License-Identifier: EPL-2.0                                                                *
# *************************************************************************************************/

PROJECT(KeypleUtil C CXX)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(VERSION_MAJOR "2")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")

SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

SET(PACKAGE_NAME "KeypleUtil")
SET(PACKAGE_VERSION ${VERSION})
SET(PACKAGE_STRING "${PACKAGE_NAME} ${PACKAGE_VERSION}")

SET(CMAKE_MACOSX_RPATH 1)
SET(CMAKE_CXX_STANDARD 11)

SET(EXECUTABLE_NAME keypleutilcpplib_ut)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DKEYPLEUTIL_EXPORT")

INCLUDE_DIRECTORIES(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../main
    ${CMAKE_CURRENT_SOURCE_DIR}/../main/bertlv
    ${CMAKE_CURRENT_SOURCE_DIR}/../main/cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../main/cpp/exception
)

ADD_EXECUTABLE(
    ${EXECUTABLE_NAME}

    ${CMAKE_CURRENT_SOURCE_DIR}/ApduUtilTest.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/BerTlvUtilTest.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ByteArrayUtilTest.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/MainTest.cpp
)

TARGET_LINK_LIBRARIES(${EXECUTABLE_NAME} gtest gmock keypleutilcpplib)
