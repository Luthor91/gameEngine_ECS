#ifndef TAG_COMPONENT_H
#define TAG_COMPONENT_H

#include <string.h>
#include "../../Entities/include/entity.h"

#define MAX_TAG_LENGTH 64
#define MAX_TAGS 16

// Structure pour stocker les tags d'une entité
typedef struct TagComponent {
    char tags[MAX_TAGS][MAX_TAG_LENGTH];
    int tagCount;
} TagComponent;

// Fonctions pour gérer les tags

static int findTagIndex(TagComponent* tagComp, const char* tag);
void addTagComponent(Entity entity, TagComponent tagComponent);
TagComponent* getTagComponent(Entity entity);
void addTag(Entity entity, const char* tag);
void removeTag(Entity entity, const char* tag);
void removeAllTags(Entity entity);
bool hasTag(Entity entity, const char* tag);
Entity* getEntitiesWithTag(const char* tag, int* outCount);

#endif // TAG_COMPONENT_H