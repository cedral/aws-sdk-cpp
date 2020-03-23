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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/imagebuilder/model/ImageState.h>
#include <aws/imagebuilder/model/ImageRecipe.h>
#include <aws/imagebuilder/model/InfrastructureConfiguration.h>
#include <aws/imagebuilder/model/DistributionConfiguration.h>
#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
#include <aws/imagebuilder/model/OutputResources.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>An image build version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Image">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API Image
  {
  public:
    Image();
    Image(Aws::Utils::Json::JsonView jsonValue);
    Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline Image& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline Image& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>
     */
    inline Image& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline Image& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version of the image.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The semantic version of the image.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The semantic version of the image.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The semantic version of the image.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The semantic version of the image.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The semantic version of the image.</p>
     */
    inline Image& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The semantic version of the image.</p>
     */
    inline Image& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the image.</p>
     */
    inline Image& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The platform of the image.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the image.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the image.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the image.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the image.</p>
     */
    inline Image& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the image.</p>
     */
    inline Image& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The state of the image.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }

    /**
     * <p>The state of the image.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the image.</p>
     */
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the image.</p>
     */
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the image.</p>
     */
    inline Image& WithState(const ImageState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the image.</p>
     */
    inline Image& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline const ImageRecipe& GetImageRecipe() const{ return m_imageRecipe; }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline bool ImageRecipeHasBeenSet() const { return m_imageRecipeHasBeenSet; }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline void SetImageRecipe(const ImageRecipe& value) { m_imageRecipeHasBeenSet = true; m_imageRecipe = value; }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline void SetImageRecipe(ImageRecipe&& value) { m_imageRecipeHasBeenSet = true; m_imageRecipe = std::move(value); }

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline Image& WithImageRecipe(const ImageRecipe& value) { SetImageRecipe(value); return *this;}

    /**
     * <p>The image recipe used when creating the image.</p>
     */
    inline Image& WithImageRecipe(ImageRecipe&& value) { SetImageRecipe(std::move(value)); return *this;}


    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline const Aws::String& GetSourcePipelineName() const{ return m_sourcePipelineName; }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline bool SourcePipelineNameHasBeenSet() const { return m_sourcePipelineNameHasBeenSet; }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline void SetSourcePipelineName(const Aws::String& value) { m_sourcePipelineNameHasBeenSet = true; m_sourcePipelineName = value; }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline void SetSourcePipelineName(Aws::String&& value) { m_sourcePipelineNameHasBeenSet = true; m_sourcePipelineName = std::move(value); }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline void SetSourcePipelineName(const char* value) { m_sourcePipelineNameHasBeenSet = true; m_sourcePipelineName.assign(value); }

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline Image& WithSourcePipelineName(const Aws::String& value) { SetSourcePipelineName(value); return *this;}

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline Image& WithSourcePipelineName(Aws::String&& value) { SetSourcePipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline Image& WithSourcePipelineName(const char* value) { SetSourcePipelineName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline const Aws::String& GetSourcePipelineArn() const{ return m_sourcePipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline bool SourcePipelineArnHasBeenSet() const { return m_sourcePipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline void SetSourcePipelineArn(const Aws::String& value) { m_sourcePipelineArnHasBeenSet = true; m_sourcePipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline void SetSourcePipelineArn(Aws::String&& value) { m_sourcePipelineArnHasBeenSet = true; m_sourcePipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline void SetSourcePipelineArn(const char* value) { m_sourcePipelineArnHasBeenSet = true; m_sourcePipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline Image& WithSourcePipelineArn(const Aws::String& value) { SetSourcePipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline Image& WithSourcePipelineArn(Aws::String&& value) { SetSourcePipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline Image& WithSourcePipelineArn(const char* value) { SetSourcePipelineArn(value); return *this;}


    /**
     * <p> The infrastructure used when creating this image.</p>
     */
    inline const InfrastructureConfiguration& GetInfrastructureConfiguration() const{ return m_infrastructureConfiguration; }

    /**
     * <p> The infrastructure used when creating this image.</p>
     */
    inline bool InfrastructureConfigurationHasBeenSet() const { return m_infrastructureConfigurationHasBeenSet; }

    /**
     * <p> The infrastructure used when creating this image.</p>
     */
    inline void SetInfrastructureConfiguration(const InfrastructureConfiguration& value) { m_infrastructureConfigurationHasBeenSet = true; m_infrastructureConfiguration = value; }

    /**
     * <p> The infrastructure used when creating this image.</p>
     */
    inline void SetInfrastructureConfiguration(InfrastructureConfiguration&& value) { m_infrastructureConfigurationHasBeenSet = true; m_infrastructureConfiguration = std::move(value); }

    /**
     * <p> The infrastructure used when creating this image.</p>
     */
    inline Image& WithInfrastructureConfiguration(const InfrastructureConfiguration& value) { SetInfrastructureConfiguration(value); return *this;}

    /**
     * <p> The infrastructure used when creating this image.</p>
     */
    inline Image& WithInfrastructureConfiguration(InfrastructureConfiguration&& value) { SetInfrastructureConfiguration(std::move(value)); return *this;}


    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline const DistributionConfiguration& GetDistributionConfiguration() const{ return m_distributionConfiguration; }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline bool DistributionConfigurationHasBeenSet() const { return m_distributionConfigurationHasBeenSet; }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline void SetDistributionConfiguration(const DistributionConfiguration& value) { m_distributionConfigurationHasBeenSet = true; m_distributionConfiguration = value; }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline void SetDistributionConfiguration(DistributionConfiguration&& value) { m_distributionConfigurationHasBeenSet = true; m_distributionConfiguration = std::move(value); }

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline Image& WithDistributionConfiguration(const DistributionConfiguration& value) { SetDistributionConfiguration(value); return *this;}

    /**
     * <p>The distribution configuration used when creating this image.</p>
     */
    inline Image& WithDistributionConfiguration(DistributionConfiguration&& value) { SetDistributionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const{ return m_imageTestsConfiguration; }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline void SetImageTestsConfiguration(const ImageTestsConfiguration& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = value; }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline void SetImageTestsConfiguration(ImageTestsConfiguration&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::move(value); }

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline Image& WithImageTestsConfiguration(const ImageTestsConfiguration& value) { SetImageTestsConfiguration(value); return *this;}

    /**
     * <p>The image tests configuration used when creating this image.</p>
     */
    inline Image& WithImageTestsConfiguration(ImageTestsConfiguration&& value) { SetImageTestsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date on which this image was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which this image was created.</p>
     */
    inline Image& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which this image was created.</p>
     */
    inline Image& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which this image was created.</p>
     */
    inline Image& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline const OutputResources& GetOutputResources() const{ return m_outputResources; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline bool OutputResourcesHasBeenSet() const { return m_outputResourcesHasBeenSet; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline void SetOutputResources(const OutputResources& value) { m_outputResourcesHasBeenSet = true; m_outputResources = value; }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline void SetOutputResources(OutputResources&& value) { m_outputResourcesHasBeenSet = true; m_outputResources = std::move(value); }

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline Image& WithOutputResources(const OutputResources& value) { SetOutputResources(value); return *this;}

    /**
     * <p>The output resources produced when creating this image.</p>
     */
    inline Image& WithOutputResources(OutputResources&& value) { SetOutputResources(std::move(value)); return *this;}


    /**
     * <p>The tags of the image.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the image.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline Image& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Platform m_platform;
    bool m_platformHasBeenSet;

    ImageState m_state;
    bool m_stateHasBeenSet;

    ImageRecipe m_imageRecipe;
    bool m_imageRecipeHasBeenSet;

    Aws::String m_sourcePipelineName;
    bool m_sourcePipelineNameHasBeenSet;

    Aws::String m_sourcePipelineArn;
    bool m_sourcePipelineArnHasBeenSet;

    InfrastructureConfiguration m_infrastructureConfiguration;
    bool m_infrastructureConfigurationHasBeenSet;

    DistributionConfiguration m_distributionConfiguration;
    bool m_distributionConfigurationHasBeenSet;

    ImageTestsConfiguration m_imageTestsConfiguration;
    bool m_imageTestsConfigurationHasBeenSet;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet;

    OutputResources m_outputResources;
    bool m_outputResourcesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
