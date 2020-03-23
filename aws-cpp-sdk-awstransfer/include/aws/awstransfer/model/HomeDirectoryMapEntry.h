﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Represents an object that contains entries and a targets for
   * <code>HomeDirectoryMappings</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/HomeDirectoryMapEntry">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API HomeDirectoryMapEntry
  {
  public:
    HomeDirectoryMapEntry();
    HomeDirectoryMapEntry(Aws::Utils::Json::JsonView jsonValue);
    HomeDirectoryMapEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline const Aws::String& GetEntry() const{ return m_entry; }

    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }

    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline void SetEntry(const Aws::String& value) { m_entryHasBeenSet = true; m_entry = value; }

    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline void SetEntry(Aws::String&& value) { m_entryHasBeenSet = true; m_entry = std::move(value); }

    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline void SetEntry(const char* value) { m_entryHasBeenSet = true; m_entry.assign(value); }

    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithEntry(const Aws::String& value) { SetEntry(value); return *this;}

    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithEntry(Aws::String&& value) { SetEntry(std::move(value)); return *this;}

    /**
     * <p>Represents an entry and a target for <code>HomeDirectoryMappings</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithEntry(const char* value) { SetEntry(value); return *this;}


    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>Represents the map target that is used in a
     * <code>HomeDirectorymapEntry</code>.</p>
     */
    inline HomeDirectoryMapEntry& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    Aws::String m_entry;
    bool m_entryHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
