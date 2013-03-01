<ul id="views-bootstrap-thumbnail-<?php print $id ?>" class="<?php print $classes ?>">
  <?php foreach ($rows as $key => $row): ?>
    <li class="<?php print $column_type ?>">
      <div class="thumbnail">
        <?php print $row ?>
      </div>
    </li>
  <?php endforeach ?>
</ul>
